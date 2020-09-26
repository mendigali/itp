#include <iostream> // library for cin and cout
#include <algorithm> // library for sort
using namespace std; // std::
int main() { // initialize main function
    // initialize integer array on 1005 elements
    // and integer variable
    int arr[1005], n;
    // input variable
    cin >> n;
    // start loop
    for (int i = 0; i < n; i++) {
        // input array element
        cin >> arr[i];
    }
    // sort array in ascending order
    sort(arr, arr + n);
    // start loop
    for (int i = 0; i < n; i++) {
        // output array element
        cout << arr[i] << ' ';
    }
    return 0; // end of the main function
}