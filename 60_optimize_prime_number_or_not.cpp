#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool isprime = true;
    for (int x = 2; x <= sqrt(n); x++)
    {
        if (n % x == 0)
            isprime = false;
        break;
    }
    if (isprime)
    {
        cout << "Prime" <<endl;
    }
    else
    {
        cout << "Composite" <<endl;
    }
}