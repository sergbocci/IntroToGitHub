#include <iostream>

using namespace std;

int main(){
    //numerical variable types: int, float, double
    //int - whole number, no decimal component, 4 bytes of memory
    //float - decimal value, floating point, 4 bytes of memory
    //double - decimal value, 8 bytes of memory, more precision than a float
    int a = 5; //declare an integer, called a, put a 5 in it
    cout << a << endl; //output a variable
    cout<<"a="<<a<<endl;
    int b = 6;
    int c = a + b;
    cout<<"c="<<c<<endl;
    //other operations on integers
    c = a * b;
    cout<<"c="<<c<<endl;
    double d1 = 5.5; //declare a double called d1 and intitialize to 5.5
    cout<<"d1="<<d1<<endl;
    c = b/a; //this is a valid integer division operation, and will produce an integer. Decimal portion is lost
    cout<<"c="<<c<<endl;
    double d2 = 6.5; //declare a double called d2 and initialize to 6.5
    double d3 = d1/d2; //division of doubles
    cout<<"d3="<<d3<<endl;
    int a2 = 75;
    int b2 = 50;
    int c2 = a2 % b2; //a2 modulus b2 returns reamineder of a2/b2
    cout<<"c2="<<c2<<endl; //what prints? 25
    //exercise:
    //divide 200 seconds into minutes and seconds
    //print
    int seconds = 200;
    int mins = seconds / 60;
    int s = seconds % 60; //remainder of 200/60
    cout<<"200 seconds is "<<mins<< " and"<<s<<" seconds"<<endl;
    return 0;
}

// using namespace std;
// #include <iostream>

// int main(){

//     class geek
//     {
//         private:
//             int puffs;
//         public:
//             geek(int puff)    
//             {       
//                 puffs = puff;
//             }
//             void puff(int puff)
//             {
//                 puffs+=puff;
//             }
//             void print_puffs()
//             {
//                 cout << "puffs: " << puffs << endl;
//             }
//     };

//     geek sergio(5);
//     sergio.puff(9);
//     sergio.print_puffs();
//     // cout << "test" << endl;
//     geek devash(10000);

//     struct sampleperson 
//     {
//         int age;
//         int dob;
//         string name;
//     };

//     sampleperson person1(5, 2005, person1);
//     cout << person1.age << endl;
//     cout << person1.dob << endl;



