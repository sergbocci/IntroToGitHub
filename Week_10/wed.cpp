//object oriented programming
//how would you represent a bicycle in code?
//speed, brand, color, comfort, acceleration
//create a variable that is type bicycle. Data members and functions that are user defined.
/*
Define a class that provides
the template of what a bicycle is

Define a variable that is an instance of the class. 
This is an object

Class Bicycle: 
    properties + actions
    manufacturer
    color
    condition
    speed
    ^^^properties of bicycle
    Actions - methods that act on the properties
    print the bicycle
    speed up
    slow down
    get a new seat
Features of OOP
-class defines the object
-class has public + private members and methods

Public - public interface, methods and members can be accessed outside of the class
Private- access to private class. members controlled through public interface. Controls data integrity through public methods
-class has a constructor - special function that runs when instance of the class is created. used to set initial values of class members.
class Bicycle
    private:
        string condition
        double speed
        string manufacturer
    public:
        Bicycle()
        Bicycle(string c, double s, string m)
            condition = c
            speed = s
            manufacturer = m
        define methods to get
        get and set value of private members
    void setCondition(string c)
        condition = c
    string getCondition()
        return condition
You should typically have a get + set method for any member that will need to be accessed outside of class
*/
#include <iostream>
using namespace std;

class Automobile{
    private:
        string make;
        string model;
        int year;
        string condition;
    public:
        Automobile(string ma, string mo, int y, string co){
            make = ma;
            model = mo;
            year = y;
            condition = co;
            cout<<"calling constructor"<<endl;
        }
};


int main(){
    //each of these is an instance of automobile
    Automobile truck("Ford", "Ranger", 2021, "new");
    Automobile truck2("Ford", "F150", 2020, "used");
    return 0;
}