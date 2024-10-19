#include <iostream>
#include <string>
using namespace std;
int main()
{
string languages[5] = {"C++","Python","Java","Matlab","Julia"}; //changes languages[6] --> languages[5] for correct amount of items
int product = 1; //change product = 0 to product =1
int total = 5; //set to length of the languages(5)
for(int i = 0; i < total; i++)//change <= to < go correct amount of indexes in the array
{
product *= languages[i].length();//missing parenthasis to correctly use .length() function
}
cout << "Product of lengths = " << product << endl;
return 0;
}