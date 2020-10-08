#include <iostream>
using namespace std;
int *lastMax(int *start, int *finish) {
    int mx = -999, *pos;
    for (int *i = start; i < finish; i++) {
        cin >> *i;
        if (*i >= mx) {
            pos = i;
            mx = *i;
        }
    }
    return pos;
}
int positiveSum(int *start, int *finish) {
    int sum = 0;
    for (int *i = start; i < finish; i++)
        if (*i > 0)
            sum += *i;
    return sum;
}
int main() {
    int n, arr[100];
    cin >> n;
    cout << positiveSum(arr, lastMax(arr, arr+n));
    return 0;
}