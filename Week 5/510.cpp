#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            if (a > 0) {
                arr.push_back(a);
            }
        }
    }
    cout << arr.size() << '\n';
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}