#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cin >> n;

    while(n > 0){
        int x = n % 10;
        sum += x;
        n /= 10;
    }
    cout << sum << endl; 
}
