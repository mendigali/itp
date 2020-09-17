#include <iostream> // library for cin and cout
#include <cmath> // library for pow
using namespace std; // std:: by default
int main() { // main function
    double a, result = 0; // initialize 2 double variables
    int n; // initialize integer
    cin >> a >> n; // input 2 numbers
    result = 1 / a; // make result equal to 1 divided by a
    // loop from 2 until n times 2 including
    // iterator will be increased by 2 each step
    for (int i = 2; i <= n*2; i += 2) {
        // update result
        result += 1 / pow(a, i);
    }
    // output result
    cout << result;
    return 0; // end of the main function
}