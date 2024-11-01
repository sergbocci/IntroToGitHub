#include <iostream>
#include <fstream>
using namespace std;

void compareAttendanceSheet(string first_attendance_file, string second_attendance_file)
{
    ifstream fn1, fn2;
    fn1.open(first_attendance_file);
    fn2.open(second_attendance_file);
    if(!fn1.is_open()){
        cout<<"Failed to open attendance files"<<endl;
        return;
    }
    if(!fn2.is_open()){
        cout<<"Failed to open attendance files"<<endl;
        return;
    }
    string arr1person;
    string arr2person;
    string arr1[30];
    string arr2[30];
    int i = 0;
    while (getline(fn1, arr1person))
    {
        arr1[i] = arr1person;
        i++;
    }
    int j = 0;
    while (getline(fn2, arr2person))
    {
        arr2[j] = arr2person;
        j++;
    }
    int count = 0;
    int finalcount = 0;
    int firstperson = 0;
    for (int j = 0; j < 30; j++)
    {
        for (int z = 0; z < 30; z++)
        {
            if (arr1[j] == arr2[z])
            {
                count++;
            }
        }
        if (count == 0 && firstperson == 0)
        {
            firstperson++;
            finalcount++;
            cout << "Students yet to board the bus are" << endl;
            cout << arr1[j] << endl;
        }else if(firstperson != 0 && count == 0){
            cout << arr1[j] << endl;
        }
        count = 0;
    }
    if (finalcount == 0)
    {
        cout << "Every student has boarded the bus. It's time to leave." << endl;
    }
}

int main()
{
    compareAttendanceSheet("example_1.txt", "example_2.txt");
    return 0;
}