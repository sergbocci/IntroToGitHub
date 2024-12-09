#include <iostream>
using namespace std;
class MyClass
{
public:
    MyClass(int val) { valueX = val; }
    int getValue() const { return valueX; } //return valueX because that is the name of the private variable

private:
    int valueX; // changed value ----> valueX bc at first private variable was not referenced correctly
};
int main()
{
    MyClass obj(10);
    cout << obj.getValue() << endl;
    return 0;
}