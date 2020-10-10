#include <iostream>
using namespace std;
// initialize a function which takes
// 2 numbers and returns 1 number which
// is the result of taking first 
// number to the power of second number
// by using for loop
double power(double a, int n) {
    double result = 1;
    for (int i = 1; i <= n; i++)
        result *= a;
    return result;
}
int main() {
    // initialize and input 
    // 1 double and 1 integer
    // numbers
    double a;
    int n;
    cin >> a >> n;
    // call a function which takes
    // first number and gets it 
    // to the power of second number
    cout << power(a, n);
    return 0;
}