#include <iostream> // library for cin and cout
using namespace std; // std:: by default
int main() { // main function
    int n; // initialize integer
    double a, result = 0, denominator = 1; // initialize 3 double
    cin >> a >> n; // input 2 numbers
    for (int i = 0; i <= n; i++) { // loop from 0 until n including
        denominator *= a + i; // update value of denominator
        result += 1 / denominator; // add to result new value
    }
    // output result
    cout << result;
    return 0; // end of the main function
}