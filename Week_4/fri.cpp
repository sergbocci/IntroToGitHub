#include <iostream>
using namespace std;
//function takes two doubles, subtracts amount from balance if balance >= amount, returns
//new balance
//the argument balance is a new variable, new memory location, 
//the value 100 is copied into the new variable 
double withdraw(double balance,double amount){ //balance is a copy, new variable 
    if(balance >= amount){
        return balance - amount;
    }else{
        cout<<"not enough money"<<endl;
        return balance;
    }
}
//pass by reference
//& is the reference symbol, let's you know that the variable is pass by reference
//balance is not a new variable, we don't copy the value into the variable
//it's a reference to an existing varaible
void withdrawRef(double& balance, double amount){
    if(balance >= amount){
        balance = balance - amount;
    }else{
        cout<<"not enough money";
    }
}
double deposit(double balance, double amount){
    //update the balance using balance + amount
    //return balance 
    //check if balance and amount >= 0
   double bal = balance + amount;
    return bal;
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
    //check if amount and balance are >= 0
    if(amount >= 0 and balance >= 0){
    if(wd == 'd'){
        balance = deposit(balance, amount);
    }else if(wd=='w'){
        balance = withdraw(balance,amount);
    }else{
        cout<<"invalid input"<<endl;
    }
    }else{
        cout<<"invalid input"<<endl;
    }
    //and how much
    //total of three prompts
    //cout<<"your balance is: "<<balance<<endl;
        return balance;
 }
int main(){
    double balance = 100; //memory allocated for balance
    double b = withdraw(balance, 50); //pass by value, copy of balance is created
    cout<<"b = "<<b<<endl; //return value from withdraw, b = 50
    cout<<"balance = "<<balance<<endl; // balance = 100; local variable in main
    withdrawRef(balance, 10); //balance passed by reference, will change after this function
    cout<<"balance = "<<balance<<endl; //balance = 90 because it was updated in withdrawRef
    
    balance = bankManager();
    cout<<"your balance is "<<balance<<endl;
    return 0;
}
/*
test cases for bankManager and withdraw and deposit
w, d, or invalid input is handled correctly
withdraw and deposit have values >= 0 for balance and amount

*/