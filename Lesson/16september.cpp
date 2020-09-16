#include <iostream>
using namespace std;
void solve() {
    cout << "You are free to leave";
}
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int test;
    cin >> test;
    while (test--) {
        solve();
        cout << '\n';
    }
    return 0;
}