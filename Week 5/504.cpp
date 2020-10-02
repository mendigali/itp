#include <iostream>
using namespace std;
int main() {
    int n, m, row = -1, column = -1;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            if (a == -1) {
                row = i + 1;
                column = j + 1;
            }
        }
    }
    cout << row << ' ' << column;
    return 0;
}