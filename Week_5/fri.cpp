//nested loops
#include <iostream>

using namespace std;

int main(){
    for(int x =0; x<5; x++){
        for(int y = 0; y < 6; y++){
            cout<<"x = "<<x<<" and y = "<<y<<endl;
        }
    }

    int x =0;
    while(x < 5){
        int y = 0;
        while(y<6){
            cout<<"x = "<<x<<" and y = "<<y<<endl;
        }
    }


    for(int x = 1; x<= 5; x++){
        for(int y = 1; y <=5; y++){
            cout<<x*y<<" ";
        }
        cout<<endl; //this for formatting
    }
    return 0;
}