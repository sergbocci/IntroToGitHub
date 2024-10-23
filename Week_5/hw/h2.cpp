#include <iostream>
using namespace std;


int calculateTime(int target_size){
    double time = 0;
    //n(n+1)/2
    target_size = target_size -1;
    for(int i = 0; i<target_size; i++){
        target_size = target_size-i;
        time++;
    }
    return time;
}
int main() {

   int headSize;
   cout << "Enter head size:" << endl;
   cin >> headSize;
   while (headSize <= 0) {
       cout << "Please enter a positive integer for head size:" << endl;
       cin >> headSize;
   }

   int midBodySize;
   cout << "Enter mid-body size:" << endl;
   cin >> midBodySize;
   while (midBodySize <= 0) {
       cout << "Please enter a positive integer for mid-body size:" << endl;
       cin >> midBodySize;
   }

   int lowerBodySize;
   cout << "Enter lower-body size:" << endl;
   cin >> lowerBodySize; 
   while (lowerBodySize <= 0) {
       cout << "Please enter a positive integer for lower-body size:" << endl;
       cin >> lowerBodySize;
   }

   int headTime = calculateTime(headSize);
   int midBodyTime = calculateTime(midBodySize);
   int lowerBodyTime = calculateTime(lowerBodySize);

   cout << "Time to reach head size: " << headTime << " seconds" << endl;
   cout << "Time to reach mid-body size: " << midBodyTime << " seconds" << endl;
   cout << "Time to reach lower-body size: " << lowerBodyTime << " seconds" << endl;
   cout << "Total time to create the snowman: " << headTime + midBodyTime + lowerBodyTime << " seconds" << endl;

   return 0;
}