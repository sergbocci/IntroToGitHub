#include <iostream>
#include <cmath>
using namespace std;


double calculateVolumeOfPumpkinCandy(double radiusX, double radiusY, double radiusZ){
//volume = 4/3piabc
    double volume;
    volume = (4.0/3.0)*3.14159265358979323846*radiusX*radiusY*radiusZ;
    return volume;
}
double calculateVolumeOfWitchHatCandy(double radius, double height) {
    //(1.0/3.0)pir^2h
    double volume = (1.0/3.0)*3.14159265358979323846*pow(radius,2)*height;
    return volume;
}
int main(){
    double X,Y,Z,R,H;
    cout<<"Enter the parameters for the Pumpkin Candy radius x"<<endl;
    cin>>X;
    cout<<"Enter the parameters for the Pumpkin Candy radius y"<<endl;
    cin>>Y;
    cout<<"Enter the parameters for the Pumpkin Candy radius z"<<endl;
    cin>>Z;

    double pumpkinCandy = calculateVolumeOfPumpkinCandy(X,Y,Z);
    cout<<"pumpkinCandy volume is: "<<pumpkinCandy<<endl;;

    cout<<"Enter the parameters for the Witch Candy radius R"<<endl;
    cin>>R;
    cout<<"Enter the parameters for the Witch Candy radius H"<<endl;
    cin>>H;

    double witchCandy = calculateVolumeOfWitchHatCandy(R,H);
    cout<<"pumpkinCandy volume is: "<<witchCandy<<endl;;
    return 0;
}