#include <iostream>
using namespace std;
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
    int n, m, mx = 0, row = 1, duplicate = 1;
    cin >> n >> m;
    int i = 1;
    while (i <= n) {
        int positives = countPositives(m);
        if (positives == mx) {
            duplicate++;
        }
        if (positives > mx) {
            mx = positives;
            row = i;
        }
        i++;
    }
    if (duplicate == n) {
        cout << "Numbers are equal";
    }
    else {
        cout << row;
    }
    return 0;
}