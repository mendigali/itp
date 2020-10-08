#include <iostream>
using namespace std;
int *getArray(int n) {
    static int arr[100];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    return arr;
}
void printOdd(int *first, int n) {
    for (int i = 0; i < n; i++)
        if (*(first + i) % 2 == 1)
            cout << *(first + i) << ' ';
}
void printEven(int *first, int n) {
    for (int i = 0; i < n; i++)
        if (*(first + i) % 2 == 0)
            cout << *(first + i) << ' ';
}
int main() {
    int n;
    cin >> n;
    int *first = getArray(n);
    printOdd(first, n);
    printEven(first, n);
    return 0;
}