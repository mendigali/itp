#include <iostream>
using namespace std;
int main() {
    int n, m, mn = 999999;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            if (a < mn) {
                mn = a;
            }
        }
    }
    cout << mn;
    return 0;
}