#include <iostream>
using namespace std;

struct Drink{
    string name;
    string size;
    double price;
};
struct Order{
    Drink arr[10];
    int numDrinks = 0;
};
void displayDrink(Drink d){
    cout<<d.size<<" "<<d.name<<": "<<"$"<<d.price;
}
void addDrink(Order &o,Drink d){
    if(o.numDrinks == 10){
        cout<<"Max drinks reached"<<endl;
        return;
    }else{
        o.arr[o.numDrinks] = d;
        o.numDrinks++;
    }
}
double calculateTotal(Order o){
    double sum = 0;
    for(int i = 0; i <o.numDrinks; i++){
        sum += o.arr[i].price;
    }
    return sum;
}
void displayOrder(Order o){
    for(int i = 0; i<o.numDrinks; i++){
        cout<<o.arr[i].size<<" "<<o.arr[i].name<<" "<<"$"<<o.arr[i].price<<endl;
    }
}
int main(){
    Drink d;
    Drink d2;
    Drink d3;
    Order o;
    d.name = "Latte";
    d.price = 2;
    d.size = "Large";
    d2.name = "Dragonfruit";
    d2.price = 5;
    d2.size = "Small";
    d3.name = "Mango";
    d3.price = 10;
    d3.size = "Medium";
    displayDrink(d);
    addDrink(o,d);
    addDrink(o,d2);
    addDrink(o,d3);
    cout<<endl;
    double total = calculateTotal(o);
    cout<<"$"<<total<<endl;
    displayOrder(o);
    return 0;
}