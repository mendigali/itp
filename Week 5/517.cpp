#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[10][10], mx = 0;
    for (int i = 0; i < 10; i++) {
        int c = 0;
        for (int j = 0; j < 10; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 0) {
                c++;
            } else {
                mx = max(mx, c);
                c = 0;
            }
        }
        mx = max(mx, c);
    }
    for (int i = 0; i < 10; i++) {
        int c = 0;
        for (int j = 0; j < 10; j++) {
            if (arr[j][i] == 0) {
                c++;
            } else {
                mx = max(mx, c);
                c = 0;
            }
        }
        mx = max(mx, c);
    }
    cout << mx;
    return 0;
}