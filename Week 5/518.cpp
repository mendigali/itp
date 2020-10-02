#include <iostream>
using namespace std;
int arr[15][15];
bool arr2[15][15];
int countNeighbors(int x, int y) {
    int neighbors = 0;
    for (int i = x-1; i <= x+1; i++) {
        for (int j = y-1; j <= y+1; j++) {
            neighbors += arr[i][j];
        }
    }
    if (arr[x][y]) neighbors--;
    return neighbors;
}
int main() {
    int n, t;
    cin >> n >> t;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
            arr2[i][j] = arr[i][j];
        }
    }
    while (t--) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int n = countNeighbors(i, j);
                if (arr[i][j] == 1 && (n < 2 || n > 3)) {
                    arr2[i][j] = false;
                }
                if (arr[i][j] == 0 && n == 3) {
                    arr2[i][j] = true;
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                arr[i][j] = arr2[i][j];
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}