#include <iostream>
using namespace std;
int arr[55][55];
int main() {
    int n;
    cin >> n;
    int l = 1;
    int r = n;
    while (l < r) {
        for (int i = l; i <= r; i++) {
            arr[l][i] = 1;
            arr[r][i] = 1;
            arr[i][l] = 1;
            arr[i][r] = 1;
        }
        arr[l][l-1] = 1;
        arr[l+1][l] = 0;
        l += 2;
        r -= 2;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}