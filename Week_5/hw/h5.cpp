#include <iostream>
using namespace std;
bool validateInt(string input){
    int count = 0;
    for(int i = 0; unsigned(i)<=input.length();i++){
        if(input[0] == '-'){
            count = count + 0;
        }
        else if(input[i] == '-' || input[i] == '0' ||
        input[i] == '1' ||
        input[i] == '2' ||
        input[i] == '3' ||
        input[i] == '4' ||
        input[i] == '5' ||
        input[i] == '6' ||
        input[i] == '7' ||
        input[i] == '8' ||
        input[i] == '9'){
            count++;
        }
    }
    if (unsigned(count) == input.length()){
        return true;
    }else{
        return false;
    }
}
int main(){
    string number;
    cout << "Enter the integer : " << endl;
    getline(cin, number);
    if(!validateInt(number))
    {
    cout <<"The entered string is not a valid integer!!" << endl;
    }else{
cout << "The entered string is a valid integer!!"
<< endl;
}
return 0;
    return 0;
}