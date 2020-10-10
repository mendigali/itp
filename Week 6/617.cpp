#include <iostream>
#include <cmath>
using namespace std;
void solve() {
    int n, arr[100], mn = 999, pos1, pos2;
    // input array size and first element of array
    cin >> n >> arr[0];
    // start loop from the second index in array
    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        // find difference between current
        // and previous elements
        int diff = abs(arr[i] - arr[i-1]);
        // if difference is less than 
        // current minimum, store indexes
        // of these elements and update minimum
        if (diff < mn) {
            pos1 = i;
            pos2 = i + 1;
            mn = diff;
        }
    }
    // also compare first and last elements in array
    if (abs(arr[0] - arr[n-1]) < mn)
        cout << "1 " << n;
    else
        cout << pos1 << ' ' << pos2;
}
int main() {
    solve();
    return 0;
}