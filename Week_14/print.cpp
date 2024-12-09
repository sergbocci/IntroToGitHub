#include <iostream>

using namespace std;

void print_num(int n){
    if(n==5){
        return;
    }
    cout << "n is: "<< n << endl;
    print_num(n + 1);

    cout << "back to n when n was: " << n << endl;
}

int main(){
    print_num(1);

    return 0;
}