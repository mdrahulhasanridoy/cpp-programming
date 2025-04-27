#include<iostream>
using namespace std;
int main(){
    int n = 12345;
    int res = 0;
    while(n > 0){
        int x = n % 10;
        res = res * 10 + x;
        n /= 10;
    }
    cout << "Reverse: " << res << endl;
}
