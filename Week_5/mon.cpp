#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    /*
    Loops. We use loops to execute a block of code multiple times
    Could be a fixed number of times, e.g. 10 times
    Could be an indefinite number of times. Loop as long as the loop
    condition is true.

    while loop - loop an indefinite number of times
    */
   int counter = 0;
   while(counter<=5){ //loop condition is counter <= 5
    cout<<"counter = "<<counter<<endl;
    counter++; //we modify counter in the loop
    /*
    we update counter to move it closer to a value that
    will break the loop. Loop needs to terminate eventually.
    Increase by 1 to control number of times that the loop
    executes.
    */
   }
   cout<<"-------------"<<endl;
   counter = 0; //initialize counter
   while(counter <= 5){
    cout<<"counter = "<<counter<<endl;
    counter+=2;
    //how many times does the loop execute?
   }
   /*
   ask the user how many sq ft they want to paint? require 
   that they enter a positive value. Ask repeatedly until
   they enter a valid number.
   */

int sqFt; //store user input
cout<<"Enter sq ft to paint: "<<endl;
cin>>sqFt; // store user input in sqFt
while(sqFt <= 0){
    cout<<"Enter a valid number: "<<endl;
    cin>>sqFt;
}
cout<<"You entered "<<sqFt<<endl; //print final user input

    /*
    write a game that asks a user for a number between 1-100.
    Generate a random number.
    If the user guess is higher than the random number, say lower
    If the user guess is lower than the random number, say higher
    Loop until user guess matches the random number
    */
   //how do we generate random numbers in c++
   //we need to include <cstdlib> for random numbers
   //we need to generate a random number and store as an int
   //prompt the user to guess and store their guess in a variable
   //loop condition is guess != random number
   //conditional to guide the user to higher or lower
   // get their next guess and store in our guess variable
    //seed the random number generator
    srand(time(0));
    int number = rand() % 100 + 1; // gives us a number between 1-100
    //get a guess from the user
    cout<<"guess a number between 1-100"<<endl;
    int guess;
    cin>>guess; //stores the users guess
    while(guess != number){
        if(guess < number){
            cout<<"guess is too low. Guess a higher number: "<<endl;
        }
        else{
            cout<<"guess is too high. Guess a lower number: "<<endl;
        }
        cin>>guess;
    }
    cout<<"You got it! The number was: "<<number<<endl;
    return 0;
}