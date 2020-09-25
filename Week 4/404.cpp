#include <iostream>
using namespace std;
int main() {
    int n, pos = 0, mn = 999999;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num < mn) {
            mn = num;
            pos = i;
        }
    }
    cout << pos;
    return 0;
}