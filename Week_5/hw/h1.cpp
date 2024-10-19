// Please paste your whole program here
#include <iostream>
using namespace std;

char encryptLower(char letter, int shift_value){
    if(shift_value + letter <= 122 && shift_value + letter >= 97){
        if(islower(letter)){
            return letter + shift_value;
        }else{
            return letter;
        }
    }else if(shift_value + letter > 122){
        if(islower(letter)){
            for(int i = 0; i < shift_value;i++){
                if(letter + 1 == 122){
                    letter = 96;
                }else if(letter == 122){
                    letter = 97;
                }else{
                    letter+= 1;
                }
            }
            return letter;
        }else{
            return letter;
        }
    }else if(shift_value + letter < 97){
        if(islower(letter)){
            for(int i = shift_value*-1; i>0; i--){

                if(letter-1 == 96){
                    letter = 122;
                }else{
                    letter -= 1;
                }
            }
            return letter;
        }else{
            return letter;
        }
    }else{
        if(islower(letter)){
            return letter + shift_value;
        }else{
            return letter;
        }
    }
}
int main(){
    char cte; //character to encrypt
    cout<<"Enter the lowercase character to encrypt:"<<endl;
    cin>>cte;
    int sv; //int shift_value
    cout<<"Enter the encryption value:"<<endl;
    cin>>sv;

    char encrypted_letter = encryptLower(cte, sv);
    
        cout<<"Letter "<<cte<<" was encrypted to "<<encrypted_letter<<endl;


    return 0;
}