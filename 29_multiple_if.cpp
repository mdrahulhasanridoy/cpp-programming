#include<iostream>
using namespace std;
int main(){
    int age;
    cin >> age;
    if(age >= 18)
        cout << "You can vote."<< endl;
    if(age >= 45)
        cout << "Contest for elections." << endl;
}
