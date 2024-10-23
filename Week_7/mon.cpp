/*
strings
reading in data and storing as a string
manipulating string variables
type conversion
*/
#include <iostream>
#include <string> //you may or may not need this
using namespace std;
int main(){
    char characters[5] = {'a', 'b', 'c', 'd', 'e'}; //array of 5 chars
    cout<<characters[0]<<endl;
    //this is an array of 5 characters. Limited in what we can do with it
    //C++ uses strings for character sequences
    //strings - powerful, lots of built-in features that can be leverages
    string strA;
    cout<<"type a string: "<<endl;
    cin>>strA;
    cout<<"you typed "<<strA<<endl;
    cin>>strA; //reads up to the next space, without me typing anything else
    cout<<"rest of the string "<<strA<<endl;
    //user types and what they type is stored in input buffer
    //cin reads up to first space, leaves the rest in the buffer
    //calling cin again reads to next space or end of line
    //getline reads entire input up to a delimiter and stores in a string
    cin.ignore(); //ignore whatever is left in input buffer
    cout<<"type a string with spaces in it "<<endl;
    string str;
    getline(cin, str); //reads input buffer and stores in str variable
    cout<<"you typed "<<str<<endl;
    cout<<"input a string with a comma in it"<<endl;
    getline(cin, str, ','); //we use the , as the delimiter
    cout<<"up to comma "<<str<<endl;
    getline(cin, str);
    cout<<"text after comma "<<str<<endl;
    //getline(input source, variable to store input, delimiter)
    //manipulating data, strings
    cout<<"----------------"<<endl;
    string str2 = "Will the Rockies ever win the World Series? ";
    string str3 = "No, never";
    string str4 = str2 + str3; //concatenate two strings 
    cout<<str4<<endl;
    //there are many ways to do the same thing 
    str4 = str3.append(str2); 
    cout<<str4<<endl;
    //get specific character in a string at specified index
    char c = str4[1]; //get the character in the 1 position in str4
    //we can use the at command in the string class
    c = str4.at(1); // this should do same thing as str4[1]
    cout<<c<<endl;
    string str5 = str4.substr(9, 7);
    cout<<str5<<endl; // get a piece of a string
    //type conversion
    //string to int, float, double
    cout<<"type a number: "<<endl;
    getline(cin,str5); //get input and store in str5
    int n;
    n = stoi(str5); //string to int type conversion
    cout<<5 + n<<endl; //+ operator means different things for number and string 

    return 0;
}