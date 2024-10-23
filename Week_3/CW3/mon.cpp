#include <iostream>
using namespace std;
int main(){
    /*
    what have we done so far
    create variables, variables have a type
    modify variables, operations
    check true/false of an expressions, a < 5
    generating a branch in the code based on true/false evaluations of a variable
    input/output to the terminal

    algorithm - defined set of steps or a process, executed in a 
    specified order, to solve a problem. The order of the steps
    matters.

    Computer program is an implementation of an algorithm.

    Pseudocode - algorithm steps, written to sort of look like code,
    but they don't run as code.
    */
   /*
   Write a block of code that asks the user how many mpg their wehicle 
   gets and how many miles per year they drive.
   If mpg is greater than 30 and mpy is less than 10000,
   print a message "Great job".
   Otherwise, print a message "Big polluter"

   Write the algorithm first


   Algorithm:
   var mpy
   var mpg

   input mpy
   input mpg

   if(mpg >30 && mpy<10000){
   cout something
   }else{
   cout something
   }
   */

  int mpg;
  int mpy;

  cout<<"How many miles per year do you drive?"<<endl;
  cin>>mpy;
  cout<<"How many mpg do you get?"<<endl;
  cin>>mpg;

  if(mpg > 30 && mpy <10000){
    cout<<"Great job."<<endl;
  }else{
    cout<<"Big polluter";
  }

   //conditionals with multiple if, esle if
  int a = 5;
  if (a <5){
    //do something
  }else if(a < 10){//if we get here, a< 5must be false, a >= 5
    //do something
  }else if(a < 15){//if we get here, a < is false and a < 10 is false
    //do something
  }else{ //all if, else if above are false
    //do something
  }
  /*
  Ask the user a question,
  Do you want to fight the (d)ragon, (s)torm the castle, (g)o home
  User selects the option using the letter of the option
  Write a block of code that asks the user this question
  if user says d, print good luck
  if user says s, print have fun storming the castle
  if user says g, print wimp
  */
 char c = 'y'; //this creates a variable, named c, with value y
//create a variable, type char
//prompt the user
//get user input, store in the char variable
char ans;
cout<<"Do you want to fight the (d)ragon, (s)torm the castle, (g)o home: "<<endl;
cin>>ans;
if(ans == 'd'){
    cout<<"good luck";
}else if(ans == 's'){
    cout<<"have fun storming the castle";
}else if(ans == 's'){
    cout<<"wimp";
}else{
    cout<<"not valid selection";
}

   return 0;
}