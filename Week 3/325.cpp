#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double result = 0;
    for (int i = 1; i <= 10; i++) {
        double a;
        cin >> a;
        result += pow(a, i);
    }
    cout << result;
    return 0;
}