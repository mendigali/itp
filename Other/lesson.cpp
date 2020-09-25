#include <iostream>
using namespace std;
// int factorial(int num) {
//     if (num == 0) return 1;
//     return num * factorial(num - 1);
// }
int main() {
    int arr[100];
    arr[0] = arr[1] = 1;
    cout << arr[0] << '\n' << arr[1];
    for (int i = 2; i <= 10; i++) {
        arr[i] = arr[i - 1] * ++arr[i - 1];
        cout << '\n' << arr[i];
    }
    return 0;
}