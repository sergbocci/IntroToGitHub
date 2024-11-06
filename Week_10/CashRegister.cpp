#include "CashRegister.h" //the source needs to match the class definition 
#include <iostream> //the syntax for user defined header files is different than built-in
using namespace std;
CashRegister::CashRegister(){
    //these are member variables of CashRegister
    itemCount = 0;
    totalPrice = 0;
}
//this is the clear method that is in the CashRegister class
//the type is void; member of CashRegister, function name is clear
void CashRegister::clear(){
    itemCount = 0;
    totalPrice = 0;
}
void CashRegister::addItem(double price){
    //add price to array, increment itemCount, and add price to totalPrice
    items[itemCount] = price; //add to items array
    itemCount++;
    totalPrice += price;
}
double CashRegister::getTotal() const{
    return totalPrice;
}
int CashRegister::getCount() const{
    return itemCount;
}
void CashRegister::displayItems(){
    for(int i = 0; i < itemCount; i++){
        cout<<items[i]<<endl;
    }
}