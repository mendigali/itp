#include <iostream>
using namespace std;
int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            if (i < j) {
                ans += a;
            }
        }
    }
    cout << ans;
    return 0;
}