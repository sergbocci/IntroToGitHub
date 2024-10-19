#include <iostream>
#include <assert.h>//added library
using namespace std;
double findMean(int a, int b, int c)
{
int mean = (a+b+c) / 3.0;
return mean;
}
int main()
{
int average = findMean(2,5,2); //line 11 needed to change avg(2,5,2); to findMean(2,5,2); to correctly call the function of findMean()
assert(average == 3); // line 12 needed to change (average == 3) to (average == 3); - needed semicolon
cout<<average<<endl; //needs to cout average to display the value
//assert needed to add library "<assert.h>" in line 2 in order to use that funtion
return 0;
}