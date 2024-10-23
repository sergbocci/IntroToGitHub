#include <iostream>
#include <fstream>
using namespace std;

bool validateDouble(string input){
    //if the string is empty return false
    if (input.length() == 0){
        return false;
    }
    //the string must have at least one numerical digit, but it can also start with a minus sign 
    //it can have up to one decimal
    int numDecimals = 0;
    bool seenDigit = false;
    //if the string is longer than 1, the first character can be a digit or a minus sign
    switch(input[0]){
        case '-':
            break;
        case '.':
            numDecimals++;
            break;
        default:
            if (isdigit(input[0])){
                seenDigit = true;
            }
            else{
                return false;
            }
    }
    //check if all other digits are valid for index 1 through the end
    for (int i = 1; i < (int)input.length(); i++){
        if (input[i] == '.'){ //if the character isn't a number return false
            numDecimals++;
        }
        else if (isdigit(input[i])){
            seenDigit = true;
        }
        else{
            return false;
        }
    }

    if (numDecimals > 1)
        return false;
    return seenDigit;
}

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

int main()
{
    ifstream file_in("coordinates1.txt");
    string dALL,d2,d3;
    int size = 100;
    string arr[size];
    bool allValid = true;
    double x,y,z = 0.0;
    int count = 0;
    while(getline(file_in, dALL)){
        split(dALL, ',', arr, size);
        for(int i = 0; i < 3; i++){
            if (validateDouble(arr[i]) == false){
                cout<<"invalid num"<<endl;
                allValid = false;
            }else{
                if(i == 0){
                    x += stod(arr[i]);
                }else if(i == 1){
                   y += stod(arr[i]); 
                }else{
                    z += stod(arr[i]);
                }
            }
        }
        count++;
    }
    double comx = x/count;
    double comy = y/count;
    double comz = z/count;
    cout<<"The center of mass is at: "<<" "<<comx<<" "<<comy<<" "<<comz<<"!"<<endl;
    return 0;
}