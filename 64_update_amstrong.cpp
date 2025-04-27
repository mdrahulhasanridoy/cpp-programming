#include <iostream>
using namespace std;

int main() {
    int n = 371;
    int num = n;
    int cubeSum = 0;

    while (num > 0) {
        int lastDigit = num % 10;
        cubeSum += lastDigit * lastDigit * lastDigit;
        num /= 10;
    }

    if (n == cubeSum) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is NOT an Armstrong number." << endl;
    }

    return 0;
}
