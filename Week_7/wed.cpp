#include <iostream>
using namespace std;

int main(){
    int counts[5][3] = {
        {0,3,0},
        {0,0,1},
        {0,0,1},
        {3,1,1},
        {1,0,1}
    };
    int maxSum = 0;
    int index;
    for(int i = 0; i<5; i++){
        int sum = 0;
        for(int j = 0; j<3; j++){
            cout<<counts[i][j];
            sum = sum +counts[i][j];
        }
        if(sum > maxSum){
            maxSum = sum;
            index = i;
        }
        cout<<endl;
    }
    cout<<maxSum<<" medals at row "<<index<<endl;
    return 0;
}