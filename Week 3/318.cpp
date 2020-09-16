#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, result = 0;
    int n;
    cin >> a >> n;
    result = 1 / a;
    for (int i = 2; i <= n*2; i += 2) {
        result += 1 / pow(a, i);
    }
    cout << result;
    return 0;
}