#include <iostream>
#include <climits>
using namespace std;
void fillArray(int *start, int *finish) {
    for (int *i = start; i < finish; i++)
        cin >> *i;
}
int *minPos(int *start, int *finish) {
    int *pos, mn = INT_MAX;
    for (int *i = start; i < finish; i++)
        if (*i < mn) {
            mn = *i;
            pos = i;
        }
    return pos;
}
int *maxPos(int *start, int *finish) {
    int *pos, mx = INT_MIN;
    for (int *i = start; i < finish; i++)
        if (*i > mx) {
            mx = *i;
            pos = i;
        }
    return pos;
}
int countEven(int *start, int *finish) {
    int c = 0;
    for (int *i = start+1; i < finish; i++)
        if (*i % 2 == 0)
            c++;
    return c;
}
int main() {
    int n, arr[100];
    cin >> n;
    fillArray(arr, arr+n);
    int *mn = minPos(arr, arr+n);
    int *mx = maxPos(arr, arr+n);
    cout << countEven(mn, mx);
    return 0;
}