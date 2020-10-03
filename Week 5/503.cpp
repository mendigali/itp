// library for cin and cout
#include <iostream>
// std::
using namespace std;
// intialize main function
int main() {
    // initialize 4 integers
    int n, m, row, column;
    // input 2 integers
    cin >> n >> m;
    // start loop for rows
    for (int i = 0; i < n; i++) {
        // start loop for columns
        for (int j = 0; j < m; j++) {
            // initialize integer variable
            int a;
            // input variable
            cin >> a;
            // if a is zero save position
            // in row and column variables
            if (a == 0) {
                row = i + 1;
                column = j + 1;
            }
        }
    }
    // output position
    cout << row << ' ' << column;
    // end of main function
    return 0;
}