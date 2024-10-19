#include <iostream>
using namespace std;
int main()
{
int sum = 0; //sum should become a global variable so it can be seen within the for loops
int numbers[5] = {10, 20, 30, 40, 50};
cout << "The contents of the array are: ";
for (int i = 0; i < 5; i++)//i <= 5 is changed to i < 5 because it needs to run correct amount of indexs
{
cout << numbers[i] << " ";//numbers is changed to numbers at index i to print correctly
}
cout << endl;
for (int i = 0; i < 5; i++)//i <= 5 is changed to i < 5 because it needs to run correct amount of indexs

{
sum += numbers[i]; //numbers is changed to numbers at index i to add correctly
}
cout << "Sum = " << sum << endl;
return 0;
}
