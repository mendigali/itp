// library for cin and cout
#include <iostream>
// std::
using namespace std;
// initialize 2 dimension array of integers filled with 0
int arr[55][55];
// initialize main function
int main() {
    // initialize integer
    int n;
    // input variable
    cin >> n;
    // l - left side limit
    // r - right side limit
    int l = 1;
    int r = n;
    // start loop until left side limit is less than right side
    while (l < r) {
        // this loop makes square shape of 1
        // it look like this
        // 1111111
        // 1000001
        // 1011101
        // 1010101
        // 1011101
        // 1000001
        // 1111111
        for (int i = l; i <= r; i++) {
            arr[l][i] = 1;
            arr[r][i] = 1;
            arr[i][l] = 1;
            arr[i][r] = 1;
        }
        // here I change top left corner of current square
        // to make it look spiral
        // 1111111
        // 0000001
        // 1111101
        // 1000101
        // 1011101
        // 1000001
        // 1111111
        arr[l][l-1] = 1;
        arr[l+1][l] = 0;
        l += 2;
        r -= 2;
    }
    // print spiral
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}