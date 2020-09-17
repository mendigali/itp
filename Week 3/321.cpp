#include <iostream> // library for cin and cout
using namespace std; // std:: by default
int main() { // main function
    // initialize 3 double varibles
    double x, numerator = 1, denominator = 1;
    cin >> x; // input number
    // loop from 2 until 65 not including
    // iterator will be multiplied by 2 each step
    for (int i = 2; i < 65; i *= 2) {
        // update numerator and denominator
        numerator *= x - i;
        denominator *= x - i + 1;
    }
    // output numerator divided by numerator
    cout << numerator / denominator;
    return 0; // end of the main function
}