//hello Github
#include <iostream>
#include <fstream> //for file I/O
#include <sstream> //for stringstream
using namespace std;
/*
Read in the baseball data file
And store in a 2d array
Each row is the player data, each column is a player stat

Search the array and write the Rockies data to an output txt file

Three functions:
main - declare variable, 2d array, and call other functions
writeToArray - read the file and populate the array
writeToFile - read the array and write out to file

Data format

1330 rows
29 columns
*/
//write to array function
//ifstream required to be pass by reference
//syntax requires &
//2d array is also pass by reference, but doesn't require ampersand
void writeToArray(ifstream &fin, string bd[][29]){
    //read the lines in file and populate the array
    string str;
    //reads the first line in the file
    getline(fin, str);
    cout<<str<<endl;
    //getLine without a delimeter will read up to newline, \n
    int row = 0;
    while(getline(fin, str)){
        //process line read from the file
        //create a stringstream out of our string
        //include stringstream library 
        //put the string str into a stringstream
        //use getline with a , delimiter, adn write to 2d array
        stringstream ss; //create a variable called ss, type stringstream
        ss<<str; //put str into ss
        string item;
        int col = 0;
        //this does the same thing as split
        while(getline(ss, item, ',')){
            cout<<item<<endl; //test that getline reads up to,
            bd[row][col] = item;
            col++; //
        }
        row++;
    }
}
//with 2d array, 2nd dimension needs to be specified
void writeToFile(ofstream &fout, string bd[][29]){
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 29; j++){
            fout<<bd[i][j]<<" ";
        }
        fout<<endl;
    }
}
int main(){
    const int ROWS = 1330; //rows in the baseball data file
    const int COLS = 29; //columns in baseball data file
    string baseballData[ROWS][COLS]; //2d array, contents are garbage

    //create a connection to the file we're reading
    ifstream fin; //type is ifstream, variable name is fin
    //creates a connection to file in memory, for reading
    fin.open("baseballReference2017Batting.csv");
    //if fails, could be mispelled file name, file doesn't exist
    //or path not right, something went wrong
    if(fin.fail()){
        cout<<"file not found"<<endl;
        return -1;
    }
    //get here, means file opened
    //call function to write file data to an array
    //pass in file input stream variable, and 2d array
    writeToArray(fin, baseballData);
    //write to file
    ofstream fout; //put file stream
    //open output file stream, write to file called ColoradoData.txt
    //if file doesn't exist, fout creates it
    //if file does exist , fout will overwrite 
    fout.open("ColoradoData.txt");
    writeToFile(fout, baseballData);
}