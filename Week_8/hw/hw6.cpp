#include <iostream>
using namespace std;

int minAverg(int scores[][10], const int NUM_STUDENTS, double threshold)
{
    double avg = 0.0;
    for(int i = 0; i<NUM_STUDENTS; i++){
        avg = 0.0;
        for(int j = 0; j < 10; j ++){
            avg = avg + scores[i][j];
            }
        avg = avg/10;
        if(avg <= threshold){
        return i;
        }
    }
    return -1;
}

int main()
{
  int scores[2][10] = {
     {80, 90, 85, 95, 88, 82, 75, 89, 91, 87},
     {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
};
cout << "returned student index: " << minAverg(scores, 2, 10.0);
    return 0;
}