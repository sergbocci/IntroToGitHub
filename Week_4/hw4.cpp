// paste your entire program
#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    int genre;
    cout<<"Select the genre: (1) Animation (2) Adventure"<<endl;
    cin>>genre;
    
    switch (genre){
        case 1:
        int director1;
        cout<<"Select the director: (1) Pete Docter (2) Brad Bird (3) Andrew Stanton"<<endl;
        cin>>director1;
            switch(director1){
                case 1:
                int movie1;
                cout<<"Select the movie: (1) Monsters, Inc. (2) Inside Out"<<endl;
                cin>>movie1;
                    switch (movie1){
                        case 1:
                        cout<<"You have reserved the movie: Monsters, Inc."<<endl;
                        break;
                        case 2:
                        cout<<"You have reserved the movie: Inside Out."<<endl;
                        break;
                        default:
                        cout<<"Please enter a valid input"<<endl;
                    }
                break;
                case 2:
                int movie2;
                cout<<"Select the movie: (1) The Incredibles (2) Ratatouille"<<endl;
                cin>>movie2;
                    switch (movie2){
                        case 1:
                        cout<<"You have reserved the movie: The Incredibles."<<endl;
                        break;
                        case 2:
                        cout<<"You have reserved the movie: Ratatouille."<<endl;
                        break;
                        default:
                        cout<<"Please enter a valid input"<<endl;
                    }
                break;
                case 3:
                int movie3;
                cout<<"Select the movie: (1) Finding Nemo (2) WALL-E"<<endl;
                cin>>movie3;
                    switch (movie3){
                        case 1:
                        cout<<"You have reserved the movie: Finding Nemo."<<endl;
                        break;
                        case 2:
                        cout<<"You have reserved the movie: WALL-E."<<endl;
                        break;
                        default:
                        cout<<"Please enter a valid input"<<endl;
                    }
                break;
                default:
                cout<<"Please enter a valid input"<<endl;
            }
        break;
        case 2:
        int director2;
        cout<<"Select the director: (1) Steven Spielberg (2) Jon Favreau (3) Robert Zemeckis"<<endl;
        cin>>director2;
             switch(director2){
                case 1:
                int movie4;
                cout<<"Select the movie: (1) E.T. the Extra-Terrestrial (2) The BFG"<<endl;
                cin>>movie4;
                    switch (movie4){
                        case 1:
                        cout<<"You have reserved the movie: E.T. the Extra-Terrestrial."<<endl;
                        break;
                        case 2:
                        cout<<"You have reserved the movie: The BFG."<<endl;
                        break;
                        default:
                        cout<<"Please enter a valid input"<<endl;
                    }
                break;
                case 2:
                int movie5;
                cout<<"Select the movie: (1) The Jungle Book (2016) (2) Elf"<<endl;
                cin>>movie5;
                    switch (movie5){
                        case 1:
                        cout<<"You have reserved the movie: The Jungle Book (2016)."<<endl;
                        break;
                        case 2:
                        cout<<"You have reserved the movie: Elf."<<endl;
                        break;
                        default:
                        cout<<"Please enter a valid input"<<endl;
                    }
                break;
                case 3:
                int movie6;
                cout<<"Select the movie: (1) Back to the Future (2) Who Framed Roger Rabbit"<<endl;
                cin>>movie6;
                    switch (movie6){
                        case 1:
                        cout<<"You have reserved the movie: Back to the Future."<<endl;
                        break;
                        case 2:
                        cout<<"You have reserved the movie: Who Framed Roger Rabbit."<<endl;
                        break;
                        default:
                        cout<<"Please enter a valid input"<<endl;
                    }
                break;
                default:
                cout<<"Please enter a valid input"<<endl;
    }
    default:
    cout<<"Please enter a valid input"<<endl;
    
}
    return 0;
}



// problem 4
// double calculateRoomArea(double length, double width){
//     double area = length * width;
//     if(area > 0){
//         return area;
//     }else{
//         return -1;
//     }
    
// }
// int main(){
//     double length;
//     double width;
//     cout<<"Enter the length of the room in ft:"<<endl;
//     cin>>length;
//     cout<<"Enter the width of the room in ft:"<<endl;
//     cin>>width;
//     double area = calculateRoomArea(length,width);
//     if(area == -1){
//         cout<<"area cannot be calculated"<<endl;
//     }else{
//     cout<<area<<endl;
//     }
    

//     return 0;
// }

//problem 5
// double calculateSowingTime(double area, char machine_type){
//     double time;

//     switch(machine_type){
//         case 'W':
//         time = (area/8) * 12;
//         break;
//         case 'X':
//         time = (area/3) * 10;
//         break;
//         case 'Y':
//         time = (area/2) * 7;
//         break;
//         case 'Z':
//         time = (area/7) * 8;
//         break;
//         default:
//         return 0;
//     }
//     if(area < 0){
//         return 0;
//     }else{
//     return time;
//     }
// }
// int main(){
//     double area;
//     char machine_type;
//     cout<<"Enter area of the farmland in sq ft:"<<endl;
//     cin>>area;
//     cout<<"Enter the type of sowing machine to be used:"<<endl;
//     cin>>machine_type;

//     double sowtime = calculateSowingTime(area, machine_type);
//     if(sowtime == 0){
//         cout<<"Area or machine type is invalid. Time cannot be calculated."<<endl;
//     }else{
//         cout<<"The time taken is: "<<fixed<<setprecision(2)<<sowtime<<endl;
//     }
//     return 0;
// }