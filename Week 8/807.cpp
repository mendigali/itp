#include <iostream>
using namespace std;
int *posOfZero(int n) {
    static int arr[100], *pos;
    bool foundFirstZero = false;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0 && !foundFirstZero) {
            pos = &arr[i];
            foundFirstZero = true;
        }
    }
    return pos;
}
int sum(int *first) {
    int i = 1, sum = 0;
    while (*(first + i) != 0) {
        sum += *(first + i);
        i++;
    }
    return sum;
}
int main() {
    int n;
    cin >> n;
    cout << sum(posOfZero(n));
    return 0;
}