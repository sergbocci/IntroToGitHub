#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file_out; //need to separate delcaring file_out versus opening 
    file_out.open("log.txt"); //added line to output file
    string log_message = "This is a log entry.";
    file_out << log_message << endl;
    file_out.close();
    return 0;
}