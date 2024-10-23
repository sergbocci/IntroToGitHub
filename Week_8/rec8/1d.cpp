#include <iostream>
#include <string>
using namespace std;
int main()
{
const int N = 6;
string animals[N] = {"lion", "cat", "bear", "dog", "elephant", "fox"};
for (int i = 0; i < N; i++)
{
if (animals[i].length() == 4) //change to animals at index i .length to get the length of the word at each index in the array of animals
{
cout << animals[i] << endl;
}
}
return 0;
}