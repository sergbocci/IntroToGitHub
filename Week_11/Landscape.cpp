#include "Landscape.h"

Landscape::Landscape(){
    //set random x and y position for each bug, and set random direction
    for(int i = 0; i <bugNumber; i++){
        //bugs[i].setX - calls the setX method
        //bugs[i].setY - calls the setY method
        //bugs[i].setDircetion - write setDirection method, random int
    }
}
void Landscape::moveBugs(){
    for(int i = 0; i < bugNumber; i++){
        //loop through all bugs and move in random direction
        //call bug[i].move to move bug one step
        //generate random number, 0,1,2,3 to represent direction
        //check if move is valid
        //if valid, update bug x and y using setX and setY
        //update landscape gird with new bug positions
    }
}
void Landscape::displayBugLocations(){
    //loop through all bugs and call its displayLocation method
    for(int i = 0; i < bugNumber; i++){
        bugs[i].displayLocation();
    }
}