#include <iostream>
#include <algorithm>
using namespace std;
int findSequenceLength(int m, int mx = 0, int length = 1, int prev = 0, int cur = 0) {
    for (int i = 0; i < m; i++) {
        prev = cur;
        cin >> cur;
        if (prev == cur) {
            length++;
        } else {
            mx = max(mx, length);
            length = 1;
        }
    }
    return max(mx, length);
}
int main() {
    int n, m, result = 1, row;
    cin >> n >> m;
    int i = 0;
    while (i < n) {
        int length = findSequenceLength(m);
        if (result < length) {
            result = length;
            row = i;
        }
        i++;
    }
    if (result == 1) {
        cout << "No series of equal elements";
    } else {
        cout << "Longest series is in the string " << row;
    }
    return 0;
}