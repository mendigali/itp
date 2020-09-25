#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, arr[100005], mx = -999999;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == mx) {
            c++;
        }
    }
    cout << c;
    return 0;
}