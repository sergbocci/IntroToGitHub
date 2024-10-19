#include<iostream>
using namespace std;

int main(){
    //variable type called a bool, holds two values only, true or false
    bool flag = true; //creates a variable called flag, sets it's value to true
    //1 = true, 0 = false
    cout<<flag<<endl;
    /*
    relational operators. check the value of a variable in relation to something, could be a value, could be another variable
    assume we have a variable, call a
    < less than, a < 5
    > greater than, a > 5
    <= less than or equal to, a <= 5
    >= greater than or equal to, a >= 5
    == equal to, a == 5
    != not equal to, a != 5

    Notice the ==. this is equivalence. it's different than =, which is assignment
    */
   int a = 5;
   flag = (a==5); //what is the value of flag?
   //expression in the () will be evaluated, and it's true. then flag set to that value
    cout<<flag<<endl;
    flag = (a > 10);
    cout<<flag<<endl; // what prints? 0
    //we often want to evaluate multiple conditions or multiple variables
    //generate the true or false value of the entire expression
    //a = 5
    //(a > 4) and (a != 6) is this true or false? true
    //(a == 5) or (a > 10) is this true or false? true
    /*
    boolean operators, and, or. These operators have truth tables that tell us 
    whether final expressions is true or false
    AND
    T and T = T //if both expressions are true, the entire expression is true
    T and F = F //if one of the expressions is false, the entire expression is false
    F and T = F //if one of the expressions is false, the entire expression is false
    F and F = F //if both are false, entire is false


    */
   a = 5;
   flag = (a > 4) and (a != 6); //?T
   flag = (a > 4) && (a!=6); //same as above
   /*
   OR truth tables
   T or T = T //if both are true, entire is true
   T or F = T //if one is true, entire is true
   F or T = T //if one is true, entire is true
   F or F = F //something has to be true for entire to be true
   */
  flag = (a > 4) or (a != 6);
  flag = (a > 4) || (a != 6); // this is the same as the or
  //we use boolean logic and relational operators to determine what's true or false
  //about the value of a variable.
  //we can then create blcoks of code that only execute when something is true
  //if statement, conditionals
  a = 3;
  //if is a keyword in C++ used for generating a conditional
  //code in the () is evaluated. if it's true, the code in the {} will execute
  if (a < 4){
    cout<<"a < 4"<<endl; //this code runs if the (a<4) is true
  }

  if (a == 4){
    cout<<"a == 4"<<endl; //this code runs if the (a==4) is true
  }else{ //this code executes in all cases when a != 4. this executes in all cases when the conditional is false
    cout<<"a !=4"<<endl;
  }

  cout<<"program done"<<endl;
  //class exercise
  //write a program that asks the user for a int number. if the number is
  //less than 100, print "your number is less than 100". Otherwise, print, "your number is 100 or greater"

  cout<<"Enter any integer number: ";
  int number;
  cin>>number;
  if(number < 100){
    cout<<"your number is less than 100"<<endl;
  }else{
    cout<<"your number is 100 or greater"<<endl;
  }
    return 0;
}