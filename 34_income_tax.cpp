#include<iostream>
using namespace std;
int main(){
    int income, tax;
    cin >> income;
    if(income < 500000)
        tax = 0;
    else if(income <= 1000000)
        tax = 0.2 * income;
    else
        tax = 0.3 * income;
    cout << "Tax: " << tax << endl;
}
