#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[105], n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int h, m, s;
        cin >> h >> m >> s;
        arr[i] = (h * 3600) + (m * 60) + s;
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        int h = arr[i] / 3600;
        int m = arr[i] % 3600 / 60;
        int s = arr[i] % 3600 % 60;
        cout << h << ' ' << m << ' ' << s << '\n';
    }
    return 0;
}