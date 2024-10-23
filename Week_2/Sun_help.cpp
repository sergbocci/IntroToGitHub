//$$$/8 * (1-rate)


#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double final_amount = 0.0;
    double stipend = 0.0;
    double tax = 0.0;
    cout << "Semester Stipend: " << endl;
    cin >> stipend;
    stipend = stipend / 8.0;
    cout << "Enter Tax percentage: ";
    cin >> tax;
    tax = 1-tax/100;
    final_amount = stipend * tax;
    cout << "After taxes, you're bi-weekly stipend is: " << setprecision(5) << final_amount << "$" <<endl;
    return 0;
}