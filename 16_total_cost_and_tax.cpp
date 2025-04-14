#include<iostream>
using namespace std;

int main()
{
    float pencil,pen, eraser;
    cin>> pencil >> pen >> eraser;
    float total_cost = pencil + pen + eraser;
    cout << "Total cost: " << total_cost << endl;
    cout << "Total cost with 18% GST tax: " << (total_cost + (total_cost * 0.18)) << endl;
}