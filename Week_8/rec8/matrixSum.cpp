#include <iostream>
using namespace std;

void matrixSum(int a[2][3], int b[2][3]){
    cout<<"The sum is: ";
    for(int i =0; i< 2; i++){
        cout<<endl;
        for(int j = 0; j<3; j++){
            cout<<a[i][j]+b[i][j]<<" ";
        }
    }
}
int main(){
    int v1,v2,v3,v4,v5,v6;
    cout<<"Enter values for matrix 1, one row at a time:"<<endl;
    cin>>v1>>v2>>v3>>v4>>v5>>v6;
    int matrix1[2][3] = 
    {
        {v1,v2,v3},
         {v4,v5,v6}
    };
    int v7,v8,v9,v10,v11,v12;
    cout<<"Enter values for matrix 2, one row at a time:"<<endl;
    cin>>v7>>v8>>v9>>v10>>v11>>v12;
    int matrix2[2][3] = 
    {
        {v7,v8,v9},
         {v10,v11,v12}
    };
    matrixSum(matrix1,matrix2);
    return 0;
}