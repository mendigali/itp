#include <iostream>
#include <string>
using namespace std;
void solve() {
    int n, abc[26];
    fill(abc, abc+26, 0);
    string str;
    cin >> n;
    cin >> str;
    for (int i = 0; i < n; i++) {
        abc[int(str[i]-65)]++;
    }
    for (int i = 0; i < 26; i++) {
        if (abc[i] > 0) {
            cout << char(i+65) << ' ' << abc[i] << '\n';
        }
    }
}
int main() {
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    int test;
    cin >> test;
    while (test--) {
        solve();
        cout << '\n';
    }
    return 0;
}