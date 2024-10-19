#include <iostream>
using namespace std;

int g = 5; //g is a glboal variable, it can be used anywhere in this file
double pyramidVolume(double baseLength, double height){
    double baseArea = baseLength * baseLength;
    double volume = 1.0/3.0 * height * baseArea;
    return volume;
}

void scopeTest(){
    //what's in scope here
    cout<<g<<endl;
    // cout<<a<<endl; //does this work? no. a is not in the scope
}
void scopeTest2(int b){
    cout<<b<<endl; // will this work? yes
}
int main(){
    int a = 5; //a is local to main 
    int c = 5; // this c is local to main
    scopeTest2(a); //the name of the variable doesn't have to match the function variable name
    //passing a variable called a, and scopeTest2 declares b, but they're both int

{
        c = c + 20; //this c is the main local c 
        int c = 10; //the scope of c is in the conditional block
        cout<<"c inside the coditional: "<<c<<endl;
        c = c +5; //local to the conditional c
        //this c is the local to conditional c
    }
    //this c is local to main
    //local varaibles are easier to manage and track
    cout<<"c outside the conditional: "<<c<<endl; //what prints here?
    //double pv = pyramidVolume(10, 5);
    //cout<<"the volume is "<<pv<<endl;
    //cout<<g<<endl; //I didn't have to declare g to use it here
    /*
    write a function called pyramidVolume that calculates 
    the voume of a pyramid. The function needs the pyramid's
    base length and height as areguments, both doubles, and uses the
    formulas
    baseArea = baseLength * baseLength
    volume = 1.0/3.0 * height * baseArea
    return volume
    */
   /*
   write code that manages a bank account
   function called bankManager that will ask the user for their balance 
   and then whether they want to deposit or withdraw
   seperate function for withdraw and a seperate function for deposit
   bankManager should return the final balance (double)
   main should call bankManager with no arguments
   */
    return 0;
}
double deposit(double balance, double amount){
    //update the balance using balance + amount
    //return balance 
   double bal = balance + amount;
    return bal;
}
double withdraw(double balance, double amount){
    //check that user has enough money to withdraw
    //if balance >= amount, return balance = balance -amount
    //else, print insufficient funds, return balance
    if(balance >= amount){
       double bal = balance - amount;
    }
    return 0;
}
double bankManager(){
    //prompt the user for balance and whether to deposit or withdraw
    cout<<"What is your balance"<<endl;
    double balance;
    cin>>balance;
    cout<<"withdraw or desposit?"<<endl;
    char wd;
    cin>>wd;
    cout<<"Enter amount: "<<endl;
    double amount;
    cin>>amount;
    if(wd == 'd'){
        balance = deposit(balance, amount);
    }else{
        balance = withdraw(balance,amount);
    }
    //and how much
    //total of three prompts
        return 0;
 }
    