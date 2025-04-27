#include <iostream>
using namespace std;

int main() {
    int i = 10;
    do {
        cout << "Condition False, But it print once." << endl;
        i++;
    } while (i <= 5);
}
