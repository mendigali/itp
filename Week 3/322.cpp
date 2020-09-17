#include <iostream> // library for cin and cout
using namespace std; // std:: by default
int main() { // main function
    int n = 103; // initialize integer equal to 103
    double result = 103; // initialize double equal to 103
    // loop that will go until n greater than 1
    while (n > 1) {
        // decrease n by 2
        n -= 2;
        // update result
        result = (1 / result) + n;
    }
    // output one divided by result
    cout << 1 / result;
    return 0; // end of the main function
}