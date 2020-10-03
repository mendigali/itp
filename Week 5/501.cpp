// library for cin and cout
#include <iostream>
// std::
using namespace std;
// initialize main function
int main() {
    // initialize 3 integer variables
    int n, m, mn = 999999;
    // input 2 integers
    cin >> n >> m;
    // start loop for rows
    for (int i = 0; i < n; i++) {
        // start loop for columns
        for (int j = 0; j < m; j++) {
            // initialize integer
            int a;
            // input integer
            cin >> a;
            // compare given number with 
            // minimum
            if (a < mn) {
                mn = a;
            }
        }
    }
    // output minimum
    cout << mn;
    // end of the main function
    return 0;
}