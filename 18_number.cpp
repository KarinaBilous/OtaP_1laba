#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x, y, t;
    cout<<"Enter x: ";
    cin>>x;
    t = (x-3);
    y = 4 * pow(t, 6) - 7 * pow(t, 3) + 2;
    cout<<"y = "<<y;
    return 0;
}