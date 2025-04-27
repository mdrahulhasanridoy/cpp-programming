#include<iostream>
using namespace std;
int main(){
    int n = 12345;
    while(n > 0){
        int x = n % 10;
        n /= 10;
        cout << x; 
    }
}

