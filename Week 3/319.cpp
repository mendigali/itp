#include <iostream> // library for cin and cout
#include <cmath> // library for pow
using namespace std; // std:: by default
// this function calculates and returns factorial of a number
// code is almost exact as 311 problem
long long int factorial(int num) {
    long long int result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}
int main() { // main function
    double x; // initialize double variable
    cin >> x; // input number
    // calculate and output using given formula
    cout << (x - (pow(x, 3)/factorial(3)) + (pow(x, 5)/factorial(5)) - (pow(x, 7)/factorial(7)) + (pow(x, 9)/factorial(9)) - (pow(x, 11)/factorial(11)) + (pow(x, 13)/factorial(13)));
    return 0; // end of the main function
}