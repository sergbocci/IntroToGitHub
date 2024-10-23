#include <iostream>
#include <string>

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

int main()
{
    string testcase = "Bangkok,Berlin,Birmingham,Bogota,Busan,BatonRouge,Beaumont,Boise,Budapest";
    char separator = ',';
    const int ARR_SIZE = 5;
    string arr[ARR_SIZE];

    // num_splits is the value returned by split
    int num_splits = split(testcase, separator, arr, ARR_SIZE);

    cout << "Function returned value: " << num_splits << endl;

    for (int i = 0; i < ARR_SIZE; i++)
    {
        cout << "arr[" << i << "]:" << arr[i] << endl;
    }

    return 0;
}
