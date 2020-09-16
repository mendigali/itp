#include <iostream>
using namespace std;
int main() {
    double x;
    cin >> x;
    double result = x * x;
    int numerator = 256;
    while (numerator >= 2) {
        result = (numerator / result) + x * x;
        numerator /= 2;
    }
    cout << x / result;
    return 0;
}