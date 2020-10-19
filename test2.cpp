#include <iostream>
#include <cmath>
using namespace std;
long long int factorial(int n) {
    long long int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
double sinApprox(double x, int n) {
    double answer = 0;
    int power = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            answer += (pow(x, power)/factorial(power));
        }
        else {
            answer -= (pow(x, power)/factorial(power));
        }
        power += 2;
    }
    return answer;
}
int main() {
    int n;
    double x;
    cin >> x >> n;
    cout << sinApprox(x, n);
    return 0;
}