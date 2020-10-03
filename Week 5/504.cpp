// library for cin and cout
#include <iostream>
// std::
using namespace std;
// initialize main function
int main() {
    // initialize 4 integer varibles
    int n, m, row = -1, column = -1;
    // input 2 integers
    cin >> n >> m;
    // start loop for row
    for (int i = 0; i < n; i++) {
        // start loop for columns
        for (int j = 0; j < m; j++) {
            // initialize integer
            int a;
            // input variable
            cin >> a;
            // if a is negative one
            // store position in row
            // and column variables
            if (a == -1) {
                row = i + 1;
                column = j + 1;
            }
        }
    }
    // output position
    cout << row << ' ' << column;
    // end of the main function
    return 0;
}