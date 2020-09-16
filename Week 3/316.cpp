#include <iostream>
using namespace std;
int main() {
    double a, result;
    int n;
    cin >> a >> n;
    result = a;
    for (int i = 1; i < n; i++) {
        result *= a + i;
    }
    cout << result;
    return 0;
}