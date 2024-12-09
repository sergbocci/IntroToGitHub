#include <iostream>
#include <vector>
using namespace std;

struct Numbers
{
    int a;
    int b;
};

//<type> functionName(<parameter type> parameterName)
// return type is avector<int>
// parameter type is vector<int>
vector<int> myFunction(vector<int> v)
{
    // loop over vector and add 5 to each element
    for (int i = 0; i < v.size(); i++)
    {
        v[i] += 5;
    }
    return v; //need to return a vector from the function
}
int main()
{
    vector<Numbers> v;
    Numbers n;
    n.a = 1;
    n.b = 2;
    v.push_back(n); // pushes a copy of n onto the vector
    v[0].a = 4;
    // does this change n? No, the vector contains a copy, original
    cout << v[0].a << endl;
    cout << n.a << endl;
    // vector of vectors
    // the vector type is contained between the <>
    // the type of the vector is vector<int>
    vector<vector<int>> nestedVector;
    // create a vector and push it to nested vector
    vector<int> v2 = {5}; // vector of int with one element, 5
    nestedVector.push_back(v2);
    v2 = {10, 11, 12}; // vector with three elements in it
    // push the vector onto nestedVector
    nestedVector.push_back(v2);
    v2 = {34, 45, 56, 67}; // vector with 4 elements
    nestedVector.push_back(v2);
    // what are the sizes of nestedVector[0] and [1] and [2]?
    // 1,3,4
    cout << endl;
    cout << nestedVector[0].size() << endl;
    cout << nestedVector[1].size() << endl;
    cout << nestedVector[2].size() << endl;
    cout << endl;
    // loop over entire nestedVector structure
    for (int i = 0; i < nestedVector.size(); i++)
    {
        for (int j = 0; j < nestedVector[i].size(); j++)
        {
            cout << nestedVector[i][j] << " ";
        }
        cout << endl;
    }
    nestedVector[0].pop_back();
    // write a function that takes a vector of int as an argument
    // and returns a vector of ints
    // call the function myFunction
    v2 = myFunction(v2); //vectors are pass by value by default
    cout<<v2[0];
    return 0;
}