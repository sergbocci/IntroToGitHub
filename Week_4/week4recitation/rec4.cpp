#include <iostream>
using namespace std;

int main(){
    int initVelocity;
    int accel;
    char fuelType;
    int veloFinal;

    

    cout<<"What is the inital velocity in m/s: "<<endl;
    cin>>initVelocity;

    cout<<"What rocket fuel are you using A, B, or C: "<<endl;
    cin>>fuelType;

    if(initVelocity < 10){
        switch (fuelType){
            case 'A': 
                accel = 5;
                break;
            case 'B':
                accel = 10;
                break;
            case 'C':
                accel = 20;
                break;
        default:
            cout<<"Ivalid input"<<endl;
        }
    }
    else if(initVelocity >= 10 && initVelocity <= 40){
        switch (fuelType){
            case 'A': 
                accel = 6;
                break;
            case 'B':
                accel = 12;
                break;
            case 'C':
                accel = 24;
                break;
        default:
            cout<<"Ivalid input"<<endl;
    }
    }else if(initVelocity > 40){
        switch (fuelType){
            case 'A': 
                accel = 3;
                break;
            case 'B':
                accel = 6;
                break;
            case 'C':
                accel = 9;
                break;
        default:
            cout<<"Ivalid input"<<endl;
        }
    }

    veloFinal = initVelocity + accel*20;
    cout<<"The final velocity is: "<<veloFinal<<" m/s"<<endl;
    return 0;
}