#include<iostream>
using namespace std;
int main(){
    int age;
    cin >> age;
    if(age >= 18)
        cout << "You can vote."<< endl;
    else
        cout << "Cannot vote." << endl;
}