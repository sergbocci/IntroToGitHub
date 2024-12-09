#include <iostream>
using namespace std;
class MyClass
{
    private: //needed to include private and public classification to correctly setup a class
        int value;
    public:
        void setValue(int newValue)
        {
            value = newValue;
        }
};
int main()
{
    MyClass obj;
    obj.setValue(20);
    return 0;
}