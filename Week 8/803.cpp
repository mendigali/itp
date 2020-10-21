#include <iostream>
using namespace std;
// this function count how many times
// letter appears in char array
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
    // enter number of inputs
    cin >> n;
    // read each letter and char array
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        cin >> arr[i];
    }
    /* 
     * make loop for each array element and
     * each time call function which counts
     * how many times letter appeared in char array
     */
    for (int i = 0; i < n; i++)
        cout << countLetter(c[i], &arr[i][0]) << ' ' << c[i] << " in " << arr[i] << endl;
    return 0;
}