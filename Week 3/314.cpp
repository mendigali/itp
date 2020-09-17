#include <iostream> // library for cin and cout
#include <cmath> // library for sqrt
using namespace std; // std:: by default
int main() { // main function
    int n; // initialize integer
    double result = 0; // initialize double variable equal to 0
    cin >> n; // input number
    // loop from 0 until n not including n
    for (int i = 0; i < n; i++) {
        // result equal to given formula
        result = sqrt(2 + result);
    }
    // output result
    cout << result;
    return 0; // end of the main function
}