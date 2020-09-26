#include <iostream> // library for cin and cout
#include <algorithm> // library for max
using namespace std; // std::
int main() { // initialize main function
    // initialize integer array on 100005 elements
    // and 2 integer variables
    int n, arr[100005], mx = -999999;
    // input variable
    cin >> n;
    // start loop
    for (int i = 0; i < n; i++) {
        // input array element
        cin >> arr[i];
        // make mx equal to maximum
        // between mx and given array element
        mx = max(mx, arr[i]);
    }
    // initialize integer
    int c = 0;
    // start loop
    for (int i = 0; i < n; i++) {
        // if array element is equal
        // to maximum
        // increase counter
        if (arr[i] == mx) {
            c++;
        }
    }
    // output result
    cout << c;
    return 0; // end of the main function
}