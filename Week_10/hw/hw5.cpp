#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int split(string input_string, char separator, string arr[], const int ARR_SIZE)
{
    int start = 0; // start index for substring
    int c = 0;     // counter for array (number of splits)
    if (input_string == "")
    {
        return 0;
    }
    // Iterate over the input_string to find the separator
    for (int i = 0; i < (int)input_string.length(); i++)
    {
        if (input_string[i] == separator)
        {
            int length = i - start; // length of the substring

            if (c >= ARR_SIZE)
            {
                return -1; // Return -1 if array size is exceeded
            }

            arr[c] = input_string.substr(start, length); // store the substring
            c++;
            start = i + 1; // update start position for the next substring
        }
    }
    // Handle the last part of the string (after the final separator)
    if (c < ARR_SIZE)
    {
        arr[c] = input_string.substr(start); // add the last substring
        c++;
    }
    else
    {
        return -1; // Return -1 if array size is exceeded at the last part
    }

    return c; // return the number of substrings added
}

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
    // Overall Rating = 0.5 × food quality + 0.3 × cleanliness + 0.2 × wait time
    restaurant.overall = restaurant.food_quality * 0.5 + restaurant.cleanliness * 0.3 + restaurant.wait_time * 0.2;
    if (restaurant.food_quality < 0 || restaurant.food_quality > 10)
    {
        restaurant.overall = -1;
        return restaurant.overall;
    }
    if (restaurant.cleanliness < 0 || restaurant.cleanliness > 10)
    {
        restaurant.overall = -1;
        return restaurant.overall;
    }
    if (restaurant.wait_time < 0 || restaurant.wait_time > 10)
    {
        restaurant.overall = -1;
        return restaurant.overall;
    }
    return restaurant.overall;
}

int readRestaurantDetails(string filename, Restaurant restaurant[], const int MAX_RESTAURANTS)
{
    string ARR[30];
    int counter = 0;
    ifstream fn;
    string restaurant_line;
    fn.open(filename);
    if (!fn.is_open())
    {
        return -1;
    }
    while (getline(fn, restaurant_line) && counter < MAX_RESTAURANTS)
    {
        int parts = split(restaurant_line, '~', ARR, 5);
        if (parts == 4)
        { // Check we have at least 4 parts for each field
            restaurant[counter].name = ARR[0];
            restaurant[counter].food_quality = stoi(ARR[1]);
            restaurant[counter].cleanliness = stoi(ARR[2]);
            restaurant[counter].wait_time = stoi(ARR[3]);
            restaurant[counter].overall = getOverallRating(restaurant[counter]);
            counter++;
        }
        else
        {
            if (parts != 4)
            {
                continue; // skips line if not correct number of parts
            }
        }
    }
    return counter;
}

int getBest(Restaurant restaurants[], int arr_size, string metric)
{
    int bestIndex = -1; // To hold the index of the best restaurant based on the metric
    if (metric == "Food Quality")
    {
        int bestFOOD = -1;
        for (int i = 0; i < arr_size; i++)
        {
            if (restaurants[i].food_quality > bestFOOD)
            {
                bestFOOD = restaurants[i].food_quality;
                bestIndex = i;
            }
        }
    }
    else if (metric == "Cleanliness")
    {
        int bestClean = -1;
        for (int i = 0; i < arr_size; i++)
        {
            if (restaurants[i].cleanliness > bestClean)
            {
                bestClean = restaurants[i].cleanliness;
                bestIndex = i;
            }
        }
    }
    else if (metric == "Wait Time")
    {
        int bestWait = -1;
        for (int i = 0; i < arr_size; i++)
        {
            if (restaurants[i].wait_time > bestWait)
            {
                bestWait = restaurants[i].wait_time;
                bestIndex = i;
            }
        }
    }
    else if (metric == "Overall")
    {
        double bestOverall = -1;
        for (int i = 0; i < arr_size; i++)
        {
            if (restaurants[i].overall > bestOverall)
            {
                bestOverall = restaurants[i].overall;
                bestIndex = i;
            }
        }
    }
    else
    {
        return -1; // Invalid metric
    }

    return bestIndex;
}


int main()
{
    Restaurant restaurants[30];
    int arr_size = readRestaurantDetails("restaurants.txt", restaurants, 30);
    // Checking if the file was opened correctly
    if (arr_size == -1)
    {
        cout << "Failed to open file." << endl;
    }
    else if (arr_size == 0)
    {
        cout << "Empty file." << endl;
    }
    else
    {
        int idx = getBest(restaurants, arr_size, "Food Quality");
        if (idx == -1)
        {
            cout << "Invalid metric." << endl;
        }
        else
        {
            cout << "Restaurant: " << restaurants[idx].name << " ";
            cout << "Ratings: ";
            cout << restaurants[idx].food_quality << " ";
            cout << restaurants[idx].cleanliness << " ";
            cout << restaurants[idx].wait_time << " ";
            cout << "Overall: ";
            cout << restaurants[idx].overall << " ";
            cout << endl;
        }
    }
}