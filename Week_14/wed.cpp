#include <iostream>
using namespace std;

int add(int a, int b){return a + b;}

//func foo
int foo(int a, int b){
    return add(a,b);
}

int main(){
    cout << foo(10, 20) << endl;

    return 0;
}