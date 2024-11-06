//more classes
/*
Simulate the behavior of a cash register.
Design a class called cash register
Start from 0 items with 0 cost
and add items one at a time, each has a cost, Be able to display total number of items and total cost
of those items.

Variables:
int itemCount - how many items purchased
double totalCost - total cost of all items purchased
double items[100] - list of individual item costs
Actions:
reset - initialize the cash register to 0
addItem - purchase an item, it has a cost that will be added to total cost
getItemCount - how many items have been purchased
getTotalCost - sum of all items purchased
displayItems - print the list of all individual costs

Ex: 2
Simulate the movement of a bug on 1D axis
When the bug moves, it moves one step in the direction it's facing.
Facing right at 0, one step would put it at 1.
Facing left at 0, one step would put it at -1. 

Variables:
int position -where the bug is located on the number line
bool direction - two directions, left or right. 
Actions:
move - from current position + direction, change position by 1
turn - change direction that bug is facing
initialize - what is position and direction of bug when object created
displayLocation - print the location + direction of the bug
*/
#include <iostream>
#include "CashRegister.h"
using namespace std;
//implement a cash register class to track items purchased, and individual costs
//class prototype - defines what's in the class, but not the implementation
//constructor
//:: means member of 
int main(){
    //instance of CashRegister
    CashRegister cr;
    cr.addItem(3);
    cr.addItem(9);
    cr.addItem(12);
    cout<<"The total cost is: "<<cr.getTotal()<<endl;
    cout<<"The item count is "<<cr.getCount()<<endl;
    cr.displayItems();
    CashRegister cr2;
    cout<<"In cr2 these are the items: "<<endl;
    cr2.displayItems(); //this is empty, nothing has been added to cr2
    cr.clear(); //remove all items 
    cout<<"There are "<<cr.getCount()<< " items"<<endl;
    return 0;
}