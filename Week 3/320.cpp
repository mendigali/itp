#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    double x, a;
    cin >> x >> a >> n;
    double result = x;
    for (int i = 0; i < n; i++) {
        result = pow(result + a, 2);
    }
    cout << result + a;
    return 0;
}