#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a <= b && b <= c) {
        cout << a * 2 << '\n' << b * 2 << '\n' << c * 2;
    } else {
        cout << abs(a) << ' ' << abs(b) << ' ' << abs(c);
    }
    return 0;
}