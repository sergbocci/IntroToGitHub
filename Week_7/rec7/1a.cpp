#include <iostream>
using namespace std;
int main()
{
int x = 3, y = 4;
for(int i = 0; i <= x; i++)//need to change counter from j - > i and change i >= x to i <= x
{
for(int j = 0; j <= y; j++)
{
cout << "(" << i << ", " << j << ") ";
}
cout << endl;
}
}