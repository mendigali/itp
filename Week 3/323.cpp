#include <iostream> // library for cin and cout
using namespace std; // std:: by default
int main() { // main function
    double x; // initialize double variable
    cin >> x; // input number
    double result = x * x; // initialize result equal to x square
    int numerator = 256; // initialize integer equal to 256
    // loop that goes until numerator is greater or equal to 2
    while (numerator >= 2) {
        // update result by given formula
        result = (numerator / result) + x * x;
        // divide numerator by 2
        numerator /= 2;
    }
    // output x divided by result
    cout << x / result;
    return 0; // end of the main function
}