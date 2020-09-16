#include <iostream>
using namespace std;
int main() {
    double a, result = 0;
    int n;
    cin >> a >> n;
    for (int i = 1; i <= n; i++) {
        result += a;
    }
    cout << result;
    return 0;
}