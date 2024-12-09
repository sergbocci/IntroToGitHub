#include "Bug.h"
#ifndef LANDSCAPE_H
#define LANDSCAPE_H
class Landscape{
    private:
       // int grid[10][10]; //2d array represents the landscape
        //int height = 10;
       // int width = 10;
        //even though bugs are members of Landscape
        //the private variables in bug have to be accessed using public bug methods
        Bug bugs[5]; //array of 5 bugs
        int bugNumber = 5;
    public:
        Landscape();
        void moveBugs(); // move the bugs on the landscape using the bug.move method
        void displayBugLocations(); //show where the bugs are on the landscape
};
#endif