#include "Bug.h"
#include<iostream>
using namespace std;
Bug::Bug(){
    // position = 0;
    direction = 0;
    x = 0;
    y= 0;
    //to work in 2d
    //initialize x and y and direction
}
//position and direction can be set when bug object instantiated
// :: means member of
Bug::Bug(int xin, int yin, int d){
    // position = p;
    x = xin;
    y = yin;
    direction = d;
    //to work in 2d
    //take arguments for x, y, and direction as an int
}
//moves restricted by size of landscape
//generate random direction, and move accordingly by updating x and y
void Bug::move(int height, int width){
    direction = rand() * 4;
    //0 = up, 1 = r, 2 = down, 3 = left
    switch(direction){
        case 0: //move up
            if(y>0){
                y--;
            }
            break;
        case 1: //move right
            if(x < width - 1){
                x++;
            }
            break;
        case 2: //move down
            if(y< height - 1){
                y++;
            }
            break;
        case 3: //move left
            if(x>0){
                x--;
            }
            break;
    }
    // if(direction == 0){ //bug facing left
    //     position--;
    // }else{ //bug facing right
    //     position++;
    // }
    //to work in 2d
    //include all four directions and update x and y accordingly
}
void Bug::turn(){
    //direction = !direction; //whatever it is, make it the opposite
    //to work in 2d
    //turn needs to represent a 90 degree turn, dependent on current direction
}
void Bug::displayLocation(){
    cout<<"bug at position "<<x<<","<<y<<" heading"<<direction<<endl;
    //to work in 2d, needs to display x and y and direction
}
void Bug::setX(int xin){
    x = xin;
}
void Bug::setY(int yin){
    y = yin;
}
int Bug::getX() const{
    return x;
}
int Bug::getY() const{
    return y;
}