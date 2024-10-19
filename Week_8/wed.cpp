#include <iostream>
#include <fstream> //fiel stream library for all file i/o commands

using namespace std;
//file IO - read data into our program
//create a file stream object
//file stream object can be input file, output file, or both

int main(){

    ifstream fin; //this is for input stream for reading files
    //associate the file stream object with a file
    fin.open("file.txt"); //creates a connection to this file
    //check if file open worked
    if(fin.fail()){
        cout<<"file couldn't be opened"<<endl;
        return -1; //main failed to execute correctly
    }
    string line; // string for storing input data
    getline(fin,line); //read the first line in the file, and store in variable called line
    cout<<line<<endl;
    int total = 0; //initialize variable for keeping the sum
    while(getline(fin,line)){
        cout<<line<<endl; //this will read each line in the file
        //sum the numbers in the file
        //conert each string input into a number and add to a total
        //stoi, stod
        total = total + stoi(line);
    }
    cout<<"The total is: "<<total<<endl;
    //output file stream - write out to a file
    ofstream fout;  //type is ofstream, and the variable is fout
    fout.open("fileOutput.txt"); //if file doesn't exist, it will be created
    fout<<"The total is "<<total;
    //close my files
    fin.close();
    fout.close();
    //things to think about with file i/o
    //data format - csv, text file, how are columns seperated
    //how messy is the data - missing values, special characters, bad values
    //what is the pattern in the data? Reading every line, every col
    //implementation:
    //read each line and process - getline
    //read each word and process
    //read each character and process
    fin.open("file.txt"); //open file
    if(fin.fail()){
        cout<<"file not found"<<endl;
        return -1;
    }
    string line2;
    getline(fin,line2); //read the whole first line
    cout<<line2<<endl;
    fin>>line2; //read the next word
    cout<<line2<<endl;
    fin>>line2;
    cout<<line2<<endl;
    //read a single character only
    char ch = fin.get(); //get will read one character
    cout<<ch<<endl;
    ch = fin.get(); //get will read one character
    cout<<ch<<endl;
    //this is data number: 5
    //use get to read a char, use unget to put the char back in the 
    fin.unget(); //this puts char back
    ch = fin.get(); //reads the same char again
    cout<<ch<<endl;
    //we can use get, unget to check a value before processing it
    //getline - read up to a delimeter, newline is default
    //fin>>value - readu up to a space
    //get() - read a single character, unget() to unread a char
    fin.close();
    return 0;
}