#include<iostream>

using namespace std;

int main(){
    string name; //the variable type is string. Can contain alpha-numeric values - letters, numbers, special chars, spaces
    cout<<"What is your name? ";
    cin>>name; //get input from the user and store as a string variable called name
    cout<<"Nice to meet you "<<name<<endl;

    //int a = 10 + name; //mismatch of data types. Can't add a number and a string
    string myString = name + " have a nice day"; //the + operator concatenates strings. Different than + with numbers
    cout<<myString<<endl;

    char sub = name.at(0);
    string sub2 = name.substr(0, 5); //this creates a new string starting at index 0 and includes 5 characters 
    cout<<sub2<<endl;
    //concatenate = put two things together

    /*
    Burning one gallon of gas produces 19.4lbs of c02. Ask a user how many miles a year they drive and calculate C02 produced if they get 26 mpg.
    */
   double c02;
   cout<<"How many miles a year do you drive: "<<endl;
   double miles;
   cin>>miles;

   c02 = (miles/26.0) * 19.4;

   cout<<c02<<endl;



    return 0;
}