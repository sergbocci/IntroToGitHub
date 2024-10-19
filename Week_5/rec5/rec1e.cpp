#include <iostream>
#include <string>
#include <cassert>
using namespace std;
double getPrice(double area, string color) //can use standard format to style the code to make it look better
{
    assert(area >= 0);
    double cost = 0.0;
    if (color == "green")
    {
        cost = 4;
    }
    else if (color == "red")
    { // I changed the bracket spacing to have the bracket connect to the funtion/action it is referencing
        cost = 3;
    }
    else if (color == "orange")
    { // I changed the bracket spacing to have bracket connect to function once again
        cost = 2;
    }
    else if (color == "blue")
    { //same as above
        cost = 1;
    }
    return area * cost;
}

int main()
{
    string color, shape;
    int area_choice;
    double radius;
    double area = 0;
    cout << "Enter the area of the frame: (1) 5x5 (2) 4x6 (3) 8x10" << endl;
    cin >> area_choice;
    assert(
        area_choice == 1 || area_choice == 2 || area_choice == 3); //changed assert to show all of the values it is asserting
    if (area_choice == 1)
    {
        area = 5 * 5;
    }
    else if (area_choice == 2)
    {
        area = 4 * 6; //spaces out the brackets for better understanding of what action is performing
    }
    else if (area_choice == 3)
    {
        area = 8 * 10;
    }
    cout << "Enter the color of the frame: (green, red, orange, blue): ";
    cin >> color;
    assert(
        color == "green" || color == "red" || color == "orange" || color == "blue");
    double price = getPrice(area, color);
    cout << "You will receive a " << color << " color frame with a price of $" << price << ". ";
    cout << "Thank you for your business." << endl;
    return 0;
}