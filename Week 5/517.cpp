#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[10][10], mx = 0, length = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 0) {
                length++;
            } else {
                mx = max(mx, length);
                length = 0;
            }
        }
        mx = max(mx, length);
        length = 0;
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (arr[j][i] == 0) {
                length++;
            } else {
                mx = max(mx, length);
                length = 0;
            }
        }
        mx = max(mx, length);
        length = 0;
    }
    cout << mx;
    return 0;
}