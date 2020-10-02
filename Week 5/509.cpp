#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(m + 1, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            arr[j] += a;
        }
    }
    int mx = -999999, pos;
    for (int i = 0; i < m; i++) {
        if (mx < arr[i]) {
            mx = arr[i];
            pos = i + 1;
        }
    }
    cout << pos;
    return 0;
}