//user
//defined types
//-composite data types
/*
C++
struct - data only
class - data and methods to operate on the data
grouping multiple data elements of different types together

Ex: Baseball data. Create a struct data type to represent a baseball player.
definition - what is included in the type
declaration - creating an instance of the type
population - setting the values for each instance
access - how do we read variable values

//definition
struct BPlayer{   }
everything defined within the braces is member of the type
string ID;
int year;
int age;
string team;
double BA;

Every instance of BPlayer that I create will have these variables in it
*/

/*
//declaration
BPlayer bp; - variable is an instanc of the struct
bp.ID = "Nolan";
bp.age = 27;
bp.team = "col";
Above is how we access the members of the BPlayer instance
*/

/*
print the values stored in bp
cout<<bp.age; <--- this is an int
cout<<bp.team; <--- thi is a string
int age = bp.age;
string n = bp.team;
*/

/*
Array of BPlayer
int a[5]
BPlayer bpa[5] - array syntax is same for any array 
Each index has full values of the struct stored inside
*/

/*
pass BPlayer into a function that updates the age, returns BPlayer
default is pass by value

BPlayer updateAge(BPlayer bp, int age)
-BPlayer is return type on function
-updateAge is function name
-arguments take in int and type BPlayer
bp.age = age;
return bp;
*/
//another definition of a type, called stats

#include <iostream>
using namespace std;
struct stats{
    int hits;
    int runs;
    int triples;
    int doubles;
};

//definition - 
struct BPlayer{
    //here are the members of the type
    string ID;
    int age;
    string team;
    double BA;
    stats s; //stats is a member of BPlayer
    //when I create an instance of BPlayer
    //it will also creat an instance of stats
};
BPlayer updateAge(BPlayer bp, int age){
    bp.age = age;
    return bp;
}
int main(){
    //create an instance of BPlayer
    //type is BPlayer
    //variable name is bp
    BPlayer bp;
    bp.age = 27;
    bp.BA = .300;
    bp.ID = "nolan";
    bp.team = "COL";
    bp.s.doubles = 30; //setting the values for instance 

    //create an array of BPlayer
    BPlayer bpa[5]; //allocate memory for 5 BPlayer
    //syntax: first get to array element, bpa[1]
    //then get the member for that element
    bpa[1].age = 27;
    bpa[2].team = "COL";
    //passing to a function
    //this is pass by value
    bp = updateAge(bp,30);
    cout<<bp.age<<endl;
    return 0;
}