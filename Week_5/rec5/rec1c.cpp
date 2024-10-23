#include <iostream>
#include <cassert>
using namespace std;
bool idLengthCheck(int ID)
{
if (ID >= 9999999 && ID < 100000000) // need to change from"||" to "&&" for comparison to correctly be the correct length
{
return true;
}else{ //needed to add else statement to make sure to return false if the value is higher than length of 8
return false; 
}
}
int main()
{
assert(idLengthCheck(12345678) == true); //need == true to check if it is true.
assert(idLengthCheck(123456789) == false); //change from string to int. Change False to false
return 0;
}