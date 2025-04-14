#include <iostream>
using namespace std;

int main() {
    int x = 10;
    x = x++;
    cout << x << endl;
    int y = 10;
    y = ++y;
    cout << y << endl;
    int z = 10;
    z = z--;
    cout << z << endl;
    int w = 10;
    w = --w; 
    cout << w << endl;
}
