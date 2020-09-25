#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double arr[1005], num = -1;
    int n = 0;
    while (num != 0) {
        cin >> num;
        if (num != 0) {
            arr[n] = sqrt(num);
            n++;
        }
    }
    cout << n << '\n';
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << '\n';
    }
    return 0;
}