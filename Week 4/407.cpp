#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n;
    vector<int> abc(26, 0);
    string str;
    cin >> n;
    cin >> str;
    for (int i = 0; i < n; i++) {
        abc[int(str[i]-65)]++;
    }
    int res = 0;
    for (int i = 0; i < 26; i++) {
        if (abc[i] > 0) {
            res++;
        }
    }
    cout << res << '\n';
    for (int i = 0; i < 26; i++) {
        if (abc[i] > 0) {
            cout << char(i+65) << ' ' << abc[i] << '\n';
        }
    }
    return 0;
}