#include <iostream>
#include <cmath>
using namespace std;
void solve() {
    int n, arr[100], mn = 999, pos1, pos2;
    cin >> n >> arr[0];
    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        int diff = abs(arr[i] - arr[i-1]);
        if (diff < mn) {
            pos1 = i;
            pos2 = i + 1;
            mn = diff;
        }
    }
    if (abs(arr[0] - arr[n-1]) < mn) {
        cout << "1 " << n;
    } else {
        cout << pos1 << ' ' << pos2;
    }
}
int main() {
    solve();
    return 0;
}