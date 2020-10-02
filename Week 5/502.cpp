#include <iostream>
using namespace std;
int main() {
    int arr[100][100];
    int n, d1 = 0, d2 = 0;
    cin >> n;
    int c = n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
        d1 += arr[i][i];
        d2 += arr[i][c];
        c--;
    }
    cout << d1 << ' ' << d2;
    return 0;
}