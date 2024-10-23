#include <iostream>
#include <string>
#include<fstream> //have to include file library in order to use the file I/O functions needed in our code
using namespace std; 
int main()
{
    ifstream my_file("visitors.txt");
    string full_line;
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int vis[5] = {0, 2, 0, 0, 0};
    int i = 0;
    int traffic = 0;
    int j = 0;
    while (getline(my_file, full_line))
    {
        for (int i = 0; i < static_cast<int>(full_line.length()); i += 1)
        {
            if (full_line[i] == ' ' && i < static_cast<int>(full_line.length()) - 1)
            {
                vis[i]++; //vistor -> vis
            }
            if (full_line[i] == ',') //needs to check comma as a char instead of a string - correct comparison needs comma
            {
                vis[i]++; //vistor -> vis
            }
        }
        if (vis[i] > traffic)
        {
            traffic = vis[i]; //visitor needs to be changed to vis because that's what the array is defined as 
            j = i;
        }
        i++;
    }
    cout << days[j] << " is the busiest day of the week at the motel." << endl;
    return 0;
}