#include <iostream>
#include <string>
using namespace std;
int main()
{
int size = 7; //size needs to be changed from 6 --> 7
double scores[size] = {85.4, 90.3, 100, 89, 74.5, 95.0, 82.3};
double sum = 0;
for(int i = 0; i < size; i++)
{
sum += scores[i];
}
int avg = sum / 7.0; //needs to be divided by the size of the array scores and in this case it's 7
cout << "Average = " << avg << endl;
return 0;
}