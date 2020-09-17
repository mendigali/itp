#include <iostream> // library for cin and cout
#include <cmath> // library for pow
using namespace std; // std:: by default
int main() { // main function
    double result = 0; // initialize double variable equal to 0
    // loop from 1 until 10 including
    for (int i = 1; i <= 10; i++) {
        double a; // initialize double
        cin >> a; // input number
        result += pow(a, i); // update result
    }
    // output result
    cout << result;
    return 0; // end of the main function
}