#include <iostream> // library for cin and cout
#include <cmath> // library for pow
using namespace std; // std:: by default
int main() { // main function
    int n; // initialize integer
    double x, a; // initialive 2 double variables
    cin >> x >> a >> n; // input 3 numbers
    double result = x; // make result be equal to x
    // loop from 0 until n not including
    for (int i = 0; i < n; i++) {
        // update result
        result = pow(result + a, 2);
    }
    // output result + a
    cout << result + a;
    return 0; // end of the main function
}