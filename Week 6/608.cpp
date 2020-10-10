#include <iostream>
#include <algorithm>
using namespace std;
// function takes length of row
// and returns maximum length
// of sequence of numbers
int findSequenceLength(int m) {
    int mx = 0, length = 1, prev = 0, cur = 0;
    for (int i = 0; i < m; i++) {
        prev = cur;
        cin >> cur;
        if (prev == cur) length++;
        else {
            mx = max(mx, length);
            length = 1;
        }
    }
    return max(mx, length);
}
int main() {
    // row - index of row with maximum length of sequence
    // result - maximum length
    int n, m, result = 1, row;
    // input number of rows and columns
    cin >> n >> m;
    int i = 0;
    // start loop for number of rows
    while (i < n) {
        // length of sequence in current row
        int length = findSequenceLength(m);
        if (result < length) {
            result = length;
            row = i;
        }
        i++;
    }
    // if maximum length is 1, print message
    if (result == 1) cout << "No series of equal elements";
    // otherwise print message and index of row
    else cout << "Longest series is in the string " << row;
    return 0;
}