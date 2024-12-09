//definition of bug class 
#ifndef BUG_H
#define BUG_H
class Bug{
    private:
        int position;
        bool direction;
        //to work in 2d
        int x;
        int y;
        int direction;  //use this direction rather than the bool
    public:
        //default constructor, no parameters
        Bug();
        Bug(int,int,int); //constructor expecting parameters for position and direction
        void move(int,int); //move one step 
        void turn(); //turn bug in opposite direction
        void displayLocation(); //print position and direction
        void setX(int); //set the x position of the bug
        void setY(int); //set the y position of the bug
        int getX() const; //get the x position of the bug
        int getY() const; //get the y position of the bug
};
#endif