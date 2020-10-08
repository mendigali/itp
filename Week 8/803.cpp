#include <iostream>
using namespace std;
int countLetter(char c, char *arr) {
    int result = 0;
    for (int i = 0; i < 20; i++)
        if (*(arr + i) == c)
            result++;
    return result;
}
int main() {
    char c[100], arr[100][20];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
        cout << countLetter(c[i], &arr[i][0]) << ' ' << c[i] << " in " << arr[i] << endl;
    return 0;
}