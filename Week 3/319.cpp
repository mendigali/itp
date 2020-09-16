#include <iostream>
#include <cmath>
using namespace std;
long long int factorial(int num) {
    long long int result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}
int main() {
    double x;
    cin >> x;
    cout << (x - (pow(x, 3)/factorial(3)) + (pow(x, 5)/factorial(5)) - (pow(x, 7)/factorial(7)) + (pow(x, 9)/factorial(9)) - (pow(x, 11)/factorial(11)) + (pow(x, 13)/factorial(13)));
    return 0;
}