#include <iostream>
#include <iomanip>
using namespace std;


//pg 77 problem
//marital status: single vs married
//within marital status, we have conditional for income
//for income single <= 32k
//married <= 64k
int main(){
    char maritalStatus;
    double income;

    const double RATE1_SINGLE_LIMIT = 32000;//10% tax rate limit for single
    const double RATE1_MARRIED_LIMIT = 64000;
    const double RATE1 = 0.10;
    const double RATE2 = 0.25;

    double tax1 = 0;
    double tax2 = 0;

    //prompt the user for income
    cout<<"Please enter your income"<<endl;
    cin>>income;
    cout<<"Please enter your marital status"<<endl;
    cin>>maritalStatus;
    maritalStatus = tolower(maritalStatus);
    //check marital status first
    if(maritalStatus == 's'){
        //tax calculation for single people
        //this is a nested conditional. only runs when maritalStatus = 's'
        if(income <= RATE1_SINGLE_LIMIT){
            tax1 = RATE1 * income;
        }else{
            tax1 = RATE1 * RATE1_SINGLE_LIMIT;
            tax2 = RATE2 * (income - RATE1_SINGLE_LIMIT);
        }
        cout<<"single";
    }else if(maritalStatus =='m'){
        //tax calculation for married people
        if(income <= RATE1_MARRIED_LIMIT){
            tax1 = RATE1 * income;
        }else{
            tax1 = RATE1 *RATE1_MARRIED_LIMIT;
            tax2 = RATE2 *(income - RATE1_MARRIED_LIMIT);
        }
        cout<<"married";
    }else{
        cout<<"invalid marital status";
    }


    
cout<<"tax due: "<<tax1 +tax2<<endl;

    return 0;
}