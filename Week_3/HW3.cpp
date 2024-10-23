#include<iostream>
using namespace std;

int main(){
    int grade;
    cout<<"Enter your score from 0-100: "<<endl;
    cin>>grade;

    if (grade <= 100 && grade >=90){
        cout<<"Grade: A"<<endl;
    } else if (grade <= 89 && grade >=80){
        cout<<"Grade: B"<<endl;
    } else if (grade <= 79 && grade >=70){
        cout<<"Grade: C"<<endl;
    } else if (grade <= 69 && grade >=60){
        cout<<"Grade: D"<<endl;
    } else{
        cout<<"Grade: F"<<endl;
    }
    return 0;
}