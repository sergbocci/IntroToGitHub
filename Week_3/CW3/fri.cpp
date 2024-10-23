#include<iostream>

using namespace std;

int main(){
    /*
    //another structure for implementing branches based on the value of a variable
    //different syntax, same logical result.

    switch(expression){ //typically a variable, an int or char or a string
        case value1: //value1 is a possible value that the expression could have
            do something; //code that runs if expression == value1
            break; //break out of the switch block,exit
        case value2: //value2 is a possible value that the expression could have
            do something; //code that runs if expression == value2
            break; //exit the switch block
        default: //this is like the else in the if/else if/else
            do something //code that runs if none of the cases evaluated to true
    }

    */
cout<<"Enter a d, s, or g"<<endl;
char ans;
cin>>ans;

if(ans == 'd'){
    cout<<"good luck!";
}else if(ans == 's'){
    cout<<"have fun storming the castle";
}else if(ans == 's'){
    cout<<"wimp";
}else{
    cout<<"not valid selection";
}
//switch that is equivalent to the if/else if/else block above
//in the dragon case, ask the user if they have a sword. If they do, output you win. Otherwise output oh no!
switch(ans){
    case 'D': //what does this do?
    case 'd': //this case is true when ans = 'd'
        cout<<" Do you have a sword? "<<endl;
        char sword;
        cin>>sword;
        if(sword == 'y' or sword == 'Y'){
            cout<<" ... you win."<<endl;
        }else{
            cout<< "Oh no! good luck"<<endl;
        }
        break;
    case 's':
        cout<<"storm the castle"<<endl;
        break;
    case 'g':
        cout<<"safe choice"<<endl;
        break;
    default: //default will execute when answer !=d, s,  g
        cout<<"invalid input"<<endl;
}
cout<<"Outside of switch"<<endl;
//another switch statement with ints
int a = 5;
switch(a){
    case 1:
        cout<<"a = 1"<<endl;
        break;
    case 3:
        cout<<"a = 3"<<endl;
    case 5:
        cout<<"a = 5"<<endl;
    default:
        cout<<"a is not 1, 3, 5"<<endl;
}
    return 0;
}