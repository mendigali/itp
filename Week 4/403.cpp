#include <iostream> // library for cin and cout
#include <algorithm> // library for min 
using namespace std; // std::
int main() { // initialize main function
    // initialize 2 integer variables
    int n, mn = 1005;
    // input variable
    cin >> n;
    // start loop
    for (int i = 0; i < n; i++) {
        // initialize integer
        int num;
        // input variable
        cin >> num;
        // make mn equal to minimum
        // between itself and given variable
        mn = min(mn, num);
    }
    // output result
    cout << mn;
    return 0; // end of the main function
}