#include <iostream>
using namespace std;

//function type is an int, which means the return type must also be int
//name of the function is mySum
//the function has two arguments, a and b, both ints
//everything between {} is what executes when we call the function
int mySum(int a, int b){
    int c = a + b;
    return c; //you could use return a + b
}
void printMsg(){
    cout<<"Welcome to CSCI1300"<<endl;
}
string printMsg2(){
    string name;
    cout<<"Enter your name: "<<endl;
    cin>>name;
    string printMsg2 = "Welcome to CSCI1300 "+name;
    return printMsg2;
}
int main(){
    /*
    Functions are blocks of code that we label, we can execute the code using the label
    Functions have zero to many arguments, each argument has a type
    Functions have zero or one return value
    */
   //write a function that takes two integers and returns their sum
    int d = mySum(4,5); 
    cout<<"the sum is: "<<d<<endl;
    //write a function that has no arguments and no return value and prints
    //Welcome to CSCI1300. Call the function printMsg.
    printMsg(); //function call
    //write a function with no arguments that returns a string that says 
    //Welcome to CSCI1300
    string s = printMsg2();
    cout<<s<<endl;
    return 0;
}