#include <iostream>
using namespace std;

void mysteryFunction(int arr[], int size) {
    int temp = arr[size - 1];
    int i = size - 1;
    while (i > 0) {
        arr[i] = arr[i - 1];
        i--;
    }
    arr[0] = temp;
}

int main() {
    const int N = 7;
    int myArr[N] = {4, 6, 8, 0, 3, 2, 1};
    mysteryFunction(myArr, N);

    // Display the result
    cout << "The result is: " << endl;
    for (int i = 0; i < N; i++) {
        cout << myArr[i] << " ";
    }
    return 0;
}
