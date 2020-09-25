#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, mn = 1005;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        mn = min(mn, num);
    }
    cout << mn;
    return 0;
}