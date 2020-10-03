// library for cin and cout
#include <iostream>
// library for vector
#include <vector>
// std::
using namespace std;
// initialize main function
int main() {
    // initialize 2 integers
    int n, m;
    // input 2 variables
    cin >> n >> m;
    // initialize vector array filled with zeros
    // this array will hold sum of each column
    vector<int> arr(m + 1, 0);
    // start loop for rows
    for (int i = 0; i < n; i++) {
        // start loop for columns
        for (int j = 0; j < m; j++) {
            // initialize integer
            int a;
            // input variable
            cin >> a;
            // add element to sum for
            // the appropriate column
            arr[j] += a;
        }
    }
    // initialize 2 integers
    int mx = -999999, pos;
    // start loop for number of columns
    for (int i = 0; i < m; i++) {
        // compare sum of each column with maximum
        // and save position of maximum element
        if (mx < arr[i]) {
            mx = arr[i];
            pos = i + 1;
        }
    }
    // output position of maximum column
    cout << pos;
    // end of the main function
    return 0;
}