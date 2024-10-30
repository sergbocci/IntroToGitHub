#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file_out;
    file_out.open("output.txt");
    string message = "Hello, World!";
    file_out << message << endl;
    file_out.close(); //add line to close file to properly keep data
    return 0;
}