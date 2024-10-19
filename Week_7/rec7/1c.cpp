#include <iostream>
#include <cmath>
using namespace std;
void primeFactors(int num)
{
    int n = num; //set n = num because num is the input of function
    while (n % 2 == 0)
    {
        cout << 2;
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 2)
    {
        cout << n;
    }
    cout << endl;
}
int main()
{
    int num = 315;
    primeFactors(num);
    return 0;
}