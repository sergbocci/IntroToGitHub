#include <iostream>
using namespace std;
/*
Simulate the movement of a bug on a 1d axis
moves one step in way it's facing
Check Week_10 fri.cpp for more details
---------------------------------------
Constructors - place bug at 0 and direction = 0
- takes argument for position and direction

Update the bug class to place bug on 2d grid. How does this change position and direction?
Variables:
 int x
 int y
 ^^^bug's position set by its x + y position
 int direction - direction needs to have 4 values to represent up, down, left, right 
-------------------------------------------
Landscape:
2d array of ints to represent x,y positions
Bugs have a position(x,y) of this grid
Variables: -private
    int height
    int width
    int grid[height][width]
    Bug bugs[5] - array of 5 bugs
Actions:
    move bugs- using move method in bug class, update bug position
    displayLandscape - show positions of all bugs
    create the landscape
        with initial bug positions
        and size
------------------------------------------------------------------
Implement the bug class
Update the bug to move 2d
Create a simple Landscape w/ array of bugs as member
*/

//bug
#include "Landscape.h"
#include "Bug.h"
int main(){
    Bug b; //this calls consstructor with no arguments, position and direction are 0
    Bug b2(5, 0); //creates an instance of Bug at position = 5, direction = 0
    b.move();
    b.displayLocation();
    b2.move();
    b2.displayLocation();
    b2.turn();
    b2.displayLocation();
    Landscape l;
    return 0;
}
