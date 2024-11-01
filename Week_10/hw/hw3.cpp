#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int split(string input_string, char separator, string arr[], const int ARR_SIZE)
{
    int start = 0; // start index for substring
    int c = 0;     // counter for array (number of splits)
    if (input_string == "")
    {
        return 0;
    }
    // Iterate over the input_string to find the separator
    for (int i = 0; i < (int)input_string.length(); i++)
    {
        if (input_string[i] == separator)
        {
            int length = i - start; // length of the substring

            if (c >= ARR_SIZE)
            {
                return -1; // Return -1 if array size is exceeded
            }

            arr[c] = input_string.substr(start, length); // store the substring
            c++;
            start = i + 1; // update start position for the next substring
        }
    }
    // Handle the last part of the string (after the final separator)
    if (c < ARR_SIZE)
    {
        arr[c] = input_string.substr(start); // add the last substring
        c++;
    }
    else
    {
        return -1; // Return -1 if array size is exceeded at the last part
    }

    return c; // return the number of substrings added
}

void printHikeStats(string file_name)
{
    int linesRead = 0;
    int longest_hike = 0;
    string longest_hike_name;
    int shortest_hike = 1000000;
    string shortest_hike_name;
    double steepest_hike = 0;
    string steepest_hike_name;
    ifstream fn1;
    int size =50;
    string arr[50];
    fn1.open(file_name);
    if(!fn1.is_open()){
        cout<<"Could not open file."<<endl;
        return;
    }
    string forestline;

    while(getline(fn1,forestline)){
        if(!forestline.empty()){
            linesRead++;
        }
        split(forestline, '|', arr, size);
        if(stoi(arr[1]) > longest_hike){
            longest_hike_name = arr[0];
            longest_hike = stoi(arr[1]);
        }
        if(stoi(arr[1]) < shortest_hike){
            shortest_hike_name = arr[0];
            shortest_hike = stoi(arr[1]);
        }
        if(stoi(arr[2])/stod(arr[1]) > steepest_hike){
            steepest_hike_name = arr[0];
            steepest_hike = stod(arr[2])/stod(arr[1]);
        }
    }
    cout<<"Number of lines read: "<<linesRead<<"."<<endl;
    cout<<"Longest hike: "<<longest_hike_name<<" at "<<longest_hike<<" miles."<<endl;
    cout<<"Shortest hike: "<<shortest_hike_name<<" at "<<shortest_hike<<" miles."<<endl;
    cout<<"Steepest hike: "<<steepest_hike_name<<" at "<<fixed<<setprecision(1)<<steepest_hike<<" feet gained per mile."<<endl;
}

int main()
{
    printHikeStats("long_hikes.txt");
    return 0;
}