#include <iostream>
using namespace std;
int *getArray(int n) {
    static int arr[100];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    return arr;
}
int main() {
    int n;
    cin >> n;
    int *first = getArray(n);
    for (int i = 0; i < n; i++)
        cout << *(first + i) << ' ';
    return 0;
}