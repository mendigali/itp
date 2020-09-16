#include <iostream>
using namespace std;
int main() {
    int n;
    double a, result = 0, denominator = 1;
    cin >> a >> n;
    for (int i = 0; i <= n; i++) {
        denominator *= a + i;
        result += 1 / denominator;
    }
    cout << result;
    return 0;
}