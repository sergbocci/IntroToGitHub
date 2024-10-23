//lecture 13 9/25/2024
/*
midterm next friday during lecture
50 minute exam
paper and pencil
multiple choice and short answer questions
One 8.5x11 sheet of notes, front and back,
typed or handwritten, and font size you want
Content:
variables, conditionals, functions, loops
we will split the lecture into two locations
you'll still receive an email about where you should go for the test
We will release a sample-ish exam
Exam is Friday Oct 4, 2:30pm
Exam review session on Wednesday
If you can do the homework, you can do the exam
*/
#include <iostream>
using namespace std;

int main(){
    /*
    while loop - loop for indefinite amount of times
    for loop - fixed number of iterations


    we can write a while loop to execute a fixed
    number of iterations, but we don't use
    a for loop to execute indefinitely.
    */
   //the for loop has three three things
   //int i = 0; - this creates a variable i, and initializes to 0
   //i is local to the for loop, out of scope outsid eof for loop
   //i < 10 - this is the loop condition, loop as long as this is true
   //i++ - this is how we change i on each iteration of the loop
   for(int i = 0; i<10; i++){
    cout<<"i = "<<i<<endl;
   }
    cout<<"-----------"<<endl;
   for(int i = 0; i<10;i+=2){
    //in this example, increment i by 2 each time in loop
    cout<<"i = "<<i<<endl;
   }
   int x = 0; //x is local to main
   //using x to control the for loop, x not local to for loop
   for( x = 0; x<10; x++){
    cout<<"x = "<<x<<endl;
   }
   cout<<"x = "<<x<<endl; //x = 10 here
   string str = "This is a string";
   char c = str[0]; //this gets the letter in the first position of the string
   cout<<"The letter in position 0 is "<<c<<endl;
   c = str[1]; //gets the second letter
   c = str[2]; //gets the third letter
   //count the number of i's in the string
    //unsigned int has no negative vlaues
    //str.length( >= 0)
   int counter = 0;
   //str.length() returns the number of characters in the string
   for(int i = 0; i< str.length(); i++){
        cout<<"The letter in position "<<i<<" is "<<str[i]<<endl;
        //conditional to count if a char is an i
        if(str[i] == 'i'){
            counter++;
        }
   }
   cout<<"i count: "<<counter<<endl;

   char l = 'A';
   cout<<"letter "<<l<<" has ascii value "<<int(l)<<endl;
   while(l <= 90){
        cout<<"letter "<<l<<" has ascii value"<<int(l)<<endl;
        l++;
   }
    l = 'a' + 5;
    cout<<" l = "<<l<<endl;
       return 0;
}