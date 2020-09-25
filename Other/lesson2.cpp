#include <iostream>
using namespace std;
int main() {
    int arr[100], sum = 0, mn = 999999, mx = -999999;
    for (int i = 0; i < 20; i++) {
        arr[i] = rand() % 51 + 50;
        sum += arr[i];
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    cout << "Average: " << sum / 20 << '\n';
    cout << "Maximum: " << mx << '\n';
    cout << "Minimum: " << mn;
    return 0;
}