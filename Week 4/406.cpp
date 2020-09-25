#include <iostream>
using namespace std;
int main() {
    char arr[1005];
    int n, result = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 'A') result++;
    }
    cout << result;
    return 0;
}