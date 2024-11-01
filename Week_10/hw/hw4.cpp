#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct Restaurant
{
    string name;
    int food_quality;
    int cleanliness;
    int wait_time;
    double overall;
};

double getOverallRating(Restaurant restaurant)
{
    //Overall Rating = 0.5 × food quality + 0.3 × cleanliness + 0.2 × wait time
    restaurant.overall = restaurant.food_quality * 0.5 + restaurant.cleanliness * 0.3 + restaurant.wait_time * 0.2;
    if(restaurant.food_quality < 0 || restaurant.food_quality > 10){
        restaurant.overall = -1;
        return restaurant.overall;
    }
    if(restaurant.cleanliness < 0 || restaurant.cleanliness > 10){
        restaurant.overall = -1;
        return restaurant.overall;
    }
    if(restaurant.wait_time < 0 || restaurant.wait_time > 10){
        restaurant.overall = -1;
        return restaurant.overall;
    }
    return restaurant.overall;
}

int main()
{
    Restaurant r;
    r.name = "McDonalds";
    r.food_quality = 4;
    r.cleanliness = 7;
    r.wait_time = 5;
    r.overall = getOverallRating(r);
    if (r.overall == -1)
    {
        cout << "Invalid rating(s) entered." << endl;
    }
    else
    {
        cout << "Restaurant: " << r.name << " Overall: "
             << r.overall << endl;
    }
    return 0;
}