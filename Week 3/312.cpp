#include <iostream> // library for cin and cout
using namespace std; // std:: by default
int main() { // main function
    int n; // initialize integer
    double result = 1; // initialize double equal to 1
    cin >> n; // input number
    // loop from 1 until input number
    for (int i = 1; i <= n; i++) {
        // multiply result by result of a given formula
        result *= (1+1/double(i*i));
    }
    // output result
    cout << result;
    // end of the main fuction
    return 0;
}