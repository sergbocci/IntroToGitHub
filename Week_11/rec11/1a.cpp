#include <iostream>
using namespace std;
class MyClass
{
public:
    MyClass(int val) { value = val;}
    int getValue() { return value; }

private:
    int value;
};
int main()
{
    MyClass obj(42); //get rid of the "const" - does not like the const in front of a class- probably bc class objects wont be constant number
    cout << obj.getValue() << endl;
    return 0;
}