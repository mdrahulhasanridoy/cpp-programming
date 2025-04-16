#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a 3 digit number: ";
    cin >> number;
    int originalNumber = number;

    int digit1 = number % 10;
    number /= 10;
    int digit2 = number % 10;
    number /= 10;
    int digit3 = number % 10;
    number /= 10;
    int sum = (digit1 * digit1 * digit1) + (digit2 * digit2 * digit2) + (digit3 * digit3 * digit3);
    if (sum == originalNumber)
        cout << originalNumber << " is an Armstrong number." << endl;
    else
        cout << originalNumber << " is not an Armstrong number." << endl;
}
