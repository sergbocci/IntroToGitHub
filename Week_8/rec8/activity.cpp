#include <iostream>
#include <cmath>
using namespace std;
//create a constant variable labeled N and initialize that integer value to 50
//create a constant variable labeled Height and initialize that integer value to 15
//create a constant variable labeled Length and initialize that integer value to 40
//create a constant variable labeled Symbol and initialize that char value to *

//create a function with return type void
//name the function StartingShape
//create blank ascii 2d array by doing the following
//it should have a parameter of a string array named ART
//create a for loop while i is less than height, incrementing by 1
//create a for loop while j is less than length, incrementing by 1
//ART at i = blank
//add stem
//start by setting ART at index i = 0 and j = length/2 -1 = )
//setting ART at index i = 0 and j = length/2 +2 = |
//setting ART at index i = 1 and j = length/2 -2 = )
//setting ART at index i = 1 and j = length/2 +1 = |

const int N = 50;
const int HEIGHT = 15;
const int LENGTH = 40;
const char SYMBOL = '*';
const double PI = 4 * atan(1.0);
void StartingShape(string ART[]){
//create blank ascii 2d array
for (int i = 0; i < HEIGHT; i++)
{
for (int j = 0; j < LENGTH; j++)
{
ART[i] += ' ';
}
}
//add stem
ART[0][LENGTH/2-1] = ')';
ART[0][LENGTH/2+2] = '|';
ART[1][LENGTH/2-2] = ')';
ART[1][LENGTH/2+2] = '|';
//add eyes
ART[HEIGHT/3].replace(LENGTH/2 - 3, 7, "/| |\\");
ART[HEIGHT/3+1].replace(LENGTH/2 - 4, 9, "/_| |_\\");
}
void display(string ART[]){
//display it
for (int i = 0; i < HEIGHT; i++){
cout << ART[i] << endl;
}
}
int main()
{
double dtheta = 2.0 * PI / N;
string ART[HEIGHT];
StartingShape(ART);
// **** CODING TELEPHONE STARTS HERE ****
//add circle characters
for (int t = 0; t < N; t++)
{
double theta = t * dtheta;
int i = 0.5 * (1 + cos(theta)) * (HEIGHT - 3) + 2.5;
int j = 0.5 * (1 + sin(theta)) * (LENGTH - 1) + 0.5;
ART[i][j] = SYMBOL;
}
//add mouth
for (int i = LENGTH/4; i < LENGTH/4*3; i++){
if (i%2)
ART[HEIGHT*2/3][i] = '\\';
else
ART[HEIGHT*2/3][i] = '/';
}
// **** CODING TELEPHONE ENDS HERE ****
display(ART);
return 0;
}