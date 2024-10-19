#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3,num4,num5;
    int num6,num7;
    cout<<"Please enter 5 integers for the first set: "<<endl;
    cin>>num1 >> num2 >> num3 >> num4 >> num5;
    cout<<"Please enter 2 integers for the second set: "<<endl;
    cin>>num6 >> num7;
    int array1[5] = {num1, num2, num3, num4, num5};
    int array2[2] = {num6, num7};
    for(int i = 0; i<5; i++){
        for(int j = 0; j< 2; j++){
            cout<<array1[i]<<"-"<<array2[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}