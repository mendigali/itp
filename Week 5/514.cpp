// library for cin and cout
#include <iostream>
// std::
using namespace std;
// initialize 2 dimension array filled with zeros
int arr[35][35];
// initialize main function
int main() {
    // initialize integer variable
    int n;
    // input variable
    cin >> n;
    // make firts element equal 1
    arr[0][0] = 1;
    // start loop for rows
    for (int i = 1; i <= n; i++) {
        // start loop for columns
        for (int j = 1; j <= i; j++) {
            // make an element equal to sum 
            // of two elements above and left
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            // output array element
            cout << arr[i][j] << ' ';
        }
        // end of the line
        cout << endl;
    }
    // end of the main function
    return 0;
}