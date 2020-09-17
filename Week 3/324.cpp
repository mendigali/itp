#include <iostream> // library for cout
#include <cmath> // library for pow
using namespace std; // std:: by default
int main() { // main function
    double result = 0; // initialize double equal to 0
    // loop from 1 until 50 including
    for (int i = 1; i <= 50; i++) {
        // update result by given formula
        result += 1/pow(i, 3);
    }
    // output result
    cout << result;
    return 0; // end of the main function
}