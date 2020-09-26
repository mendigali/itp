#include <iostream> // library for cin and cout
using namespace std; // std::
int main() { // initialize main function
    int num; // initialize integer number
    cin >> num; // input number
    // if number is equal to 1
    // output NO and finish running code
    if (num == 1) {
        cout << "NO";
        return 0;
    }
    // start loop
    for (int i = 2; i < num; i++) {
        // if number has divisor
        // output NO and stop running code
        if (num % i == 0) {
            cout << "NO";
            return 0;
        }
    }
    // this output will be executed only
    // if number has no divisors except 1 and 
    // number itself
    cout << "YES";
    return 0; // end of the main function
}