#include <iostream>
using namespace std;
//arrays in C++ are always pass by reference

//given a string of words, with each word seperated by a ,
//write a function that puts each word into an array
int stringToArray(string arr[], string str, int size){
    //function returns portion of array that was used
    //loop through the string, starting at the first character
    //when I get to a comma, take the substring and put into array
    //keep track of array index to know where to put substring
    //increment array index
    int start = 0; //looking at first character in str
    int end = 0; //last character in substring
    int c = 0; //counter into array
    for(unsigned int i = 0; i < str.length(); i++){
        if(str[i] == ','){
            //This,
            int t = i - start; //this is the length of the substring
            arr[c] = str.substr(start, t);//this writes the substring into the array
            c++; //moves the count to the next array position
            start = i+1; //new starting index into our string
        }
    }
    arr[c] = str.substr(start,str.length()-1);
    c++;
    return c; //number of elements populated in the array 
}

int main(){
    string str = "This,is,a,string";
    string arr[10];
    int wordCount = stringToArray(arr, str, 10);
    cout<<"There are "<<wordCount<<" words"<<endl;
    for(int i = 0; i < wordCount; i++){
        cout<<arr[i]<<endl;
    }
    //arr[0] = "This";
    //arr[1] = "is";
    //arr[2] = "a";
    //arr[3] = "String";

    return 0;
}
