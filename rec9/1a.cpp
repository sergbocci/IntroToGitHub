#include <iostream>
#include <string>
using namespace std;
void flipSign(int numbers[], int length) //added paramater of length so that loop did not have to run 14 times- uncessary and only needs to run length of 4 
{
    for (int i = 0; i < length; i++)
    {
        numbers[i] = -1.0 * numbers[i]; //I also found that it would be valid to do -number[i] to flip the sign instead of using floating point multiplication
    }
    return;
}
int main()
{
    const int length = 4;
    int numbers[] = {1, 2, 3, 4};
    cout << "The contents of the array before changing: ";
    for (int i = 0; i < length; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    flipSign(numbers,length);
    cout << "The contents of the array after changing: ";
    for (int i = 0; i < length; i++)
    {
        cout << numbers[i] << " ";
    }
    return 0;
}