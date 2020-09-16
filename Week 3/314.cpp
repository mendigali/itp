#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    double result = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        result = sqrt(2 + result);
    }
    cout << result;
    return 0;
}