#include <iostream>
using namespace std;
// Function to calculate the transpose of a matrix
double transposeMatrix(int matrix[][3], int n, int m)
{
for (int i = 0; i < n; i++)
{
for (int j = i + 1; j < m; j++)
{
int temp = matrix[i][j]; //needs to be declared as an int
matrix[i][j] = matrix[j][i];
matrix[j][i] = temp;
}
}
return matrix[n][m]; //change to add the value it returns at each value in the 2d matrix
}
int main()
{
const int rows = 3;
const int cols = 3;
int originalMatrix[rows][cols] =
{
{1, 1, 1},
{2, 2, 2},
{3, 3, 3}
};
// Calculate the transpose matrix using the function
int result = transposeMatrix(originalMatrix, rows, cols); //originialMatirix was already declared and initialized so you do not need that in parameters
// Display the transpose matrix
cout << "Transpose Matrix:" << endl;
for (int i = 0; i < rows; i++)
{
for (int j = 0; j < cols; j++)
{
cout << originalMatrix[i][j] << " "; //needs originalMatrix instead of result because the function is pass by reference not pass by value
}
cout << endl;
}
return 0;
}