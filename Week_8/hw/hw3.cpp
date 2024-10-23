#include <iostream>
using namespace std;

void printNormalHeartRates(string patients[], int heart_rate[], const int NUM_PATIENTS)
{
    for(int i = 0; i < NUM_PATIENTS; i++){
        if(heart_rate[i] >=70 && heart_rate[i] <= 190){
            cout<<patients[i]<<" "<<heart_rate[i]<<endl;
        }
    }
}
int main()
{
    string patients[3] = {"Jamie", "Sebastien", "Shaun"};
    int heart_rate[3] = {90, 70, -12};
    printNormalHeartRates(patients, heart_rate, 3);
    return 0;
}