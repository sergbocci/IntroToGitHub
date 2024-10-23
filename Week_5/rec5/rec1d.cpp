#include <iostream>
#include <string>
#include <cassert>
using namespace std;
bool passwordMatchCheck(string, string); //change from char,char parameters to string because the parameters are going to be strings to check
bool idLengthCheck(int);// I changed char to int

int main() {
int ID;
string password;
string confirmPassword;
cout << "Enter your member ID: ";
cin >> ID;
assert(idLengthCheck(ID));
cout << "Enter your password: ";
cin >> password;
cout << "Confirm your password: ";
cin >> confirmPassword;
if (passwordMatchCheck(password, confirmPassword))
{
cout << "Password set successfully for " << ID << "." << endl; //changed username to ID. Does not mention username anywhere
}
else if (!passwordMatchCheck(password, confirmPassword))
{
cout << "Passwords do not match." << endl;
}
else if(!idLengthCheck(ID))
{
cout << "ID is invalid." << endl;
}
return 0;
}


bool passwordMatchCheck(string password, string confirmPassword)
{
// appropriate definitions
}
bool idLengthCheck(int password)//change from string to int because idlengthcheck will be an int number
{
// appropriate definitions
}