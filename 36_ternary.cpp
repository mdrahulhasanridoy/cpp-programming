#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int largest = a >= b? a : b;
    cout << "Largest: " << largest << endl;
}
