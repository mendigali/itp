#include <iostream> // library for cin and cout
using namespace std; // std::
int main() { // initialize main function
    // initialize 3 integer variables
    int n, pos = 0, mn = 999999;
    // input variable
    cin >> n;
    // start loop
    for (int i = 0; i < n; i++) {
        // initialize integer number
        int num;
        // input number
        cin >> num;
        // check if given number
        // is less than minimum
        if (num < mn) {
            // make minimum equal
            // given number
            mn = num;
            // and store position of
            // minimum number
            pos = i;
        }
    }
    // output result
    cout << pos;
    return 0; // end of the main function
}