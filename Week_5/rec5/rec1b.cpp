#include <iostream>
#include <string>
using namespace std;
bool passwordMatchCheck(string password, string confirmPassword)// need to change type of function from string to bool
{
return password == confirmPassword; //need to change = to == in order to check if they are the same instead of assigning confirmpassword to password
}
int main()
{
bool passwordMatch = passwordMatchCheck("Good","Morning");
//also for line 10, needed to change 'Good' ---> "Good" because the parameters are strings not chars
cout << passwordMatch << endl;
}