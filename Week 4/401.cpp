#include <iostream>
using namespace std;
int main() {
    int arr[105], n = 0, num = 0;
    while (num != -1) {
        cin >> num;
        if (num != -1) {
            arr[n] = num;
            n++;
        }
    }
    cout << n << '\n';
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}