#include<iostream>
using namespace std;


/*
Pseudocode (3.2.a)

goal = 10,000 steps

ask input from user for amount of steps
store the answer in a variable

base case:
if steps equals less than 0:
print "invalid response"
end program


if steps taken are <= 5000
print "You have not walked much today! Get those steps in! You have X(calculated by 10000 subtracted by steps) steps left to walk.""


else if steps taken fall between the range 5000 to 1000 not inclusive
print "You're doing great, over half way there! You still have X(calculated by 10000 subtracted by steps) steps left to walk.""


lastly, for all other cases(hitting your goal of 10000 or more)
print "You've hit your goal for the day! Great job getting exercise!"
end program

*/

/*
3.2.b case tests

Sample Run 3.2.b case 1
How many steps have you taken today?
3000
You have not walked much today! Get those steps in! You have 7000 steps left to walk.

Sample Run 3.2.b case 2
How many steps have you taken today?
10000
You've hit your goal for the day! Great job getting exercise!
*/

/*
3.2.c boundaries

Must test for an answer less than 0 because:
if(steps < 0){
        cout<<"Invalid response. ";
        return 0;
    }

Testing for steps <= 5000
input 5000
output should be
"You have not walked much today! Get those steps in! You have "<< 10000-steps<<" left to walk."<<endl;
5000 steps left to walk

Testing for steps between 5000 and 1000 not inclusive
input 7500
output should be 
"You're doing great, over half way there! You still have "<<10000-steps<< " left to walk."<<endl;
2500 steps left to walk

Testing for steps at 10000
input 10000
output should be
"You've hit your goal for the day! Great job getting exercise!"
*/


int main(){
    int steps;

    cout<<"How many steps have you walked today? "<<endl;
    cin>>steps;

    //boundary case
    if(steps < 0){
        cout<<"Invalid response. ";
        return 0;
    }

    //cases for all valid inputs
    if(steps <= 5000){
        cout<<"You have not walked much today! Get those steps in! You have "<< 10000-steps<<" left to walk."<<endl;
    }else if (steps > 5000 && steps < 10000){
        cout<<"You're doing great, over half way there! You still have "<<10000-steps<< " left to walk."<<endl;
    }else{
        cout<<"You've hit your goal for the day! Great job getting exercise!"<<endl;
    }
    return 0;
}