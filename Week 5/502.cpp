// library for cin and cout
#include <iostream>
// std::
using namespace std;
// initialize main function
int main() {
    // initialize 2 dimension array of integers
    int arr[100][100];
    // initialize 3 integer variables
    int n, d1 = 0, d2 = 0;
    // input number
    cin >> n;
    // initialize integer that will be index
    // of the last element in array
    int c = n - 1;
    // start loop for rows
    for (int i = 0; i < n; i++) {
        // start loop for columns
        for (int j = 0; j < n; j++) {
            // input array element
            cin >> arr[i][j];
        }
        // d1 is the sum of one diagonal
        d1 += arr[i][i];
        // d2 is the sum of another diagonal
        d2 += arr[i][c];
        // c is index of element going from 
        // the end to the begining
        c--;
    }
    // output sums of both diagonals
    cout << d1 << ' ' << d2;
    // end of the main function
    return 0;
}