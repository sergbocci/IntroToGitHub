/*
vectors:
Data structures - structure for holding a collection of data. 
Array 
issue: fixed size
Vector is a data structure that can be dynamically sized and resized
Deals with the big limitation of the array - fixed size. 
Standard template library - built-in data structures in c++. Vectors are part of STL.

How to use vectors in code:
declare + initialize
adding elements
remove elements 
accessing elements
#include<vector> - need to inclide the header file
vector<int> vExample; //vector is a generic container - works with all types

vector<int> vExample = {1,2,3,4,5}
created a vector w/ 5 initial values
vector<int> vExample(5) --> vector size = 5 but no initial valuess
Read data into a vector and store at end

vector<int> vExample; empty vector
vExample.push_back(10)
vExample.push_back(20)
vExample.push_back(30)
Array notation to access your data. 
vExample[0] returns 10
vExample[1] returns 20
vExample[2] returns 30

//remove from end
vExample.pop_back()
-can put any data type that you create into a vector

struct Numbers{
    int a
    int b
};
vector<numbers> v;

create an instance of numbers 
push_back on vector v
*/