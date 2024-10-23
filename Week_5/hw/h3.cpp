#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number between 10 and 500: "<<endl;
    cin>>num;
    while(num <= 10 || num >= 500){
        cout<<"Invalid input."<<endl;
        cout<<"Enter a number between 10 and 500:"<<endl;
        cin>>num;
    }
    int totalSteps = 0;
    int i = num;
    while(i >1){
        if(i%2 == 0){
            cout<<i/2<<endl;
            i = i/2;
            totalSteps++;
        }else{
            cout<<(i*3)+1<<endl;
            i=(i*3)+1;
            totalSteps++;
        }
    }
    cout<<"Total steps: "<<totalSteps<<endl;
    return 0;
}