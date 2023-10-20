#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a^2 / b^2 = " << (a*a) / (b*b);
    return 0;
}