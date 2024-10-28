#include <iostream>
#include <string>
#include <cassert>
using namespace std;
int split(string input_string, char separator, string arr[], const int ARR_SIZE)
{
    int start = 0; // start index for substring
    int c = 0;     // counter for array (number of splits)
    if (input_string == " ")
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

string appendPrepend(string message)
{
    const int LENGTH = 4;
    string message_fragments[LENGTH] = {};
    string empty_word = "";
    split(message, ' ', message_fragments, LENGTH); // needed a semi colon - also needed to get rid of brackets on meesage_fragments because it was already called declared as an arry
    assert(message_fragments[3] == empty_word);       // needed a semi colon and also needed to change message_fragments[4] --> message_fragments[3] so it doesn't go out of bounds
    string answer, word;
    for (int i = 0; i < LENGTH; i++) // instead of i == 0, it needs to be i = 0
    {
        answer += "_" + message + "_";
    }
    int first_word_length = message_fragments[0].length();
    int second_word_length = message_fragments[1].length();
    assert(message_fragments[1] == answer.substr(first_word_length + 3, second_word_length)); // neeeded a semi colon and double equal to correctly use assert
    return answer;
}
int main()
{
    cout << "Please enter the string message:" << endl;
    string message;
    getline(cin, message);
    cout << appendPrepend(message);
}