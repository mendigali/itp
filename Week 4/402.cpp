#include <iostream> // library for cin and cout
#include <cmath> // library for sqrt
using namespace std; // std::
int main() { // initialize main function
    // initialize double array on 1005 elements,
    // and number equal to -1
    double arr[1005], num = -1;
    // initialize integer equal to 0
    int n = 0;
    // start loop until value is not equal to zero
    while (num != 0) {
        // input number
        cin >> num;
        // check if number is not equal to zero
        if (num != 0) {
            // add square root of a number to array
            arr[n] = sqrt(num);
            // increase counter
            n++;
        }
    }
    // output number of elements in array
    cout << n << '\n';
    // start loop in reverse direction
    for (int i = n - 1; i >= 0; i--) {
        // output element and go to the next line
        cout << arr[i] << '\n';
    }
    return 0; // end of the main function
}