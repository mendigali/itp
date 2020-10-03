// library for cin and cout
#include <iostream>
// library for max
#include <algorithm>
// std::
using namespace std;
// initialize main function
int main() {
    // initialize 2 dimension array
    // and 2 integer variables
    int arr[10][10], mx = 0, length = 0;
    // start loop for rows
    for (int i = 0; i < 10; i++) {
        // start loop for columns
        for (int j = 0; j < 10; j++) {
            // input array element
            cin >> arr[i][j];
            // here I count length of zeros until I get 1
            // when it is zero, I refresh length and compare
            // current length with maximum lenght
            if (arr[i][j] == 0) {
                length++;
            } else {
                mx = max(mx, length);
                length = 0;
            }
        }
        // when the line ends I also refresh length 
        // and compare it to maximum length
        // 
        // I do it because I counted length only 
        // horizontally inside 1 line
        mx = max(mx, length);
        length = 0;
    }
    // in this loop I will count length vertically
    // inside each column
    // 
    // counting principle is the same as when
    // counting horizontally
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (arr[j][i] == 0) {
                length++;
            } else {
                mx = max(mx, length);
                length = 0;
            }
        }
        mx = max(mx, length);
        length = 0;
    }
    // output maximum
    cout << mx;
    return 0;
}