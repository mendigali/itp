#include <iostream>
using namespace std;
int main() {
    int n, m, row, column;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            if (a == 0) {
                row = i + 1;
                column = j + 1;
            }
        }
    }
    cout << row << ' ' << column;
    return 0;
}