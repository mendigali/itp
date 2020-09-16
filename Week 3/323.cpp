#include <iostream>
using namespace std;
int main() {
    double x;
    cin >> x;
    double result = x * x, xx = x * x;
    int numerator = 256;
    while (numerator >= 2) {
        result = (numerator / result) + xx;
        numerator /= 2;
    }
    cout << x / result;
    return 0;
}