#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            for (int j = m*(i-1); j <= m*i-1; j++) {
                cout << j << " ";
            }
            
        } else {
            for (int j = m*i-1; j >= m*(i-1); j--) {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}