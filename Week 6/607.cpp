#include <iostream>
using namespace std;
// this function takes length of 
// a row, inputs whole row and 
// returns number of positives
int countPositives(int m) {
    int result = 0;
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        if (a > 0) result++;
    }
    return result;
}
int main () {
    // duplicate - count number of rows with 
    // equal number of positives
    int n, m, mx = 0, row = 1, duplicate = 1;
    // input number of rows and columns
    cin >> n >> m;
    int i = 1;
    // start loop for given amount of rows
    while (i <= n) {
        // number of positives in current row
        int positives = countPositives(m);
        if (positives == mx) duplicate++;
        if (positives > mx) {
            mx = positives;
            row = i;
        }
        i++;
    }
    // if number of rows with equal number of positives
    // is equal to total number of rows, print this message
    if (duplicate == n) cout << "Numbers are equal";
    // otherwise print index of rows with maximum positives
    else cout << row;
    return 0;
}