#include <iostream>
using namespace std;
double power(double a, int n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= a;
    }
    return result;
}
int main() {
    double a;
    int n;
    cin >> a >> n;
    cout << power(a, n);
    return 0;
}