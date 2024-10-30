#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file_out;
    file_out.open("output.txt");
    string test_string = "C++ file handling is fun!";
    file_out << "Writing this sentence to the file" << endl; //need << operators when writing to a new file
    file_out << test_string << endl; //once again need << operators in order to properly write to new file
    file_out.close();
    return 0;
}