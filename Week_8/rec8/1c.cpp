#include <iostream>
using namespace std;
int main()
{
int N = 4; //change so that it is length of the item array
string item[] = {"book", "pen", "pencil", "eraser"}; //change from char array to a string array
//printing all the items
for (int i = 0; i < N; i++)
{
cout << "The item list has " << item[i] << endl; //items ---> item and should change j to i in order to increment correctly.
}
return 0;
}