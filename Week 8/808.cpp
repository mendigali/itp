#include <iostream>
using namespace std;
/*
 * read and store array in memory
 * locations between 2 pointers
 */
void read(int *l, int *r) {
    for (int *i = l; i < r; i++)
        cin >> *i;
}
/*
 * this function finds and
 * returns position of
 * maximum element in array
 */
int *maxPosition(int *l, int *r) {
    int mx = -999, *pos;
    for (int *i = l; i < r; i++)
        if (*i >= mx) {
            pos = i;
            mx = *i;
        }
    return pos;
}
/*
 * this function calculates
 * sum of positive elements
 * before maximum element
 */
int positiveSum(int *l, int *r) {
    int sum = 0;
    for (int *i = l; i < r; i++)
        if (*i > 0)
            sum += *i;
    return sum;
}
int main() {
    int n;
    // enter array size
    cin >> n;
    // create array with dynamic memory size
    int *arr = new int[n];
    read(arr, arr+n);
    int *maxPos = maxPosition(arr, arr+n);
    cout << positiveSum(arr, maxPos);
    // delete array and maxPos from memory
    delete[] arr;
    delete maxPos;
    return 0;
}