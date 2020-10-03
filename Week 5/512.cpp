// library for cin and cout
#include <iostream>
// std::
using namespace std;
// initialize main function
int main() {
    // initialize 2 dimension array of integers
    // and 2 integer variables
    int n, m, arr[100][100];
    // input 2 variables
    cin >> n >> m;
    // start loop for rows
    for (int i = 0; i < n; i++) {
        // start loop for columns
        for (int j = 0; j < m; j++) {
            // input array element
            cin >> arr[i][j];
        }
    }
    // start loop in reverse direction
    for (int i = m - 1; i >= 0; i--) {
        // start loop for columns
        for (int j = 0; j < n; j++) {
            // ouput array element
            cout << arr[j][i] << ' ';
        }
        // end of the line
        cout << endl;
    }
    // end of the main function
    return 0;
}