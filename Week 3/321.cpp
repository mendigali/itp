#include <iostream>
using namespace std;
int main() {
    double x, numerator = 1, denominator = 1;
    cin >> x;
    for (int i = 2; i < 65; i *= 2) {
        numerator *= x - i;
        denominator *= x - i + 1;
    }
    cout << numerator / denominator;
    return 0;
}