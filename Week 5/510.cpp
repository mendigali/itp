// library for cin and cout
#include <iostream>
// library for vector, push back,
// begin, end, size
#include <vector>
// library for sort
#include <algorithm>
// std::
using namespace std;
// initialize main function
int main() {
    // initialize 2 integers
    int n, m;
    // input 2 variables
    cin >> n >> m;
    // initialize vector array which
    // will store elements that are greater
    // than zero
    vector<int> arr;
    // start loop for rows
    for (int i = 0; i < n; i++) {
        // start loop for columns
        for (int j = 0; j < m; j++) {
            // initialize integer
            int a;
            // input number
            cin >> a;
            // if given number is greater than zero
            // then add this number to array
            if (a > 0) {
                arr.push_back(a);
            }
        }
    }
    // output size of an array
    cout << arr.size() << '\n';
    // sort array in ascending order
    sort(arr.begin(), arr.end());
    // start loop for each element in array
    for (int i = 0; i < arr.size(); i++) {
        // output array element
        cout << arr[i] << ' ';
    }
    // end of the main function
    return 0;
}