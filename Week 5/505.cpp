// library for cin and cout
#include <iostream>
// std::
using namespace std;
// initialize main function
int main() {
    // initialize 2 dimension array
    // of integers and integer variable
    int arr[100][100], n;
    // input variable
    cin >> n;
    // start loop for rows
    for (int i = 0; i < n; i++) {
        // start loop for columns
        for (int j = 0; j < n; j++) {
            // input array element
            cin >> arr[i][j];
        }
    }
    // start loop for rows
    for (int i = 0; i < n; i++) {
        // start loop for columns
        for (int j = 0; j < n; j++) {
            // initialize variable            
            int a;
            // input variable
            cin >> a;
            // add given variable to
            // previous array
            // according to position i and j
            arr[i][j] += a;
        }
    }
    // start loop for rows
    for (int i = 0; i < n; i++) {
        // start loop for columns
        for (int j = 0; j < n; j++) {
            // output array element and put space
            cout << arr[i][j] << ' ';
        }
        // go to next line
        cout << endl;
    }
    // end of the main function
    return 0;
}