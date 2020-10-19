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
 * minimum element in array
 */
int *minPosition(int *l, int *r) {
    int *pos, mn = 999;
    for (int *i = l; i < r; i++)
        if (*i < mn) {
            mn = *i;
            pos = i;
        }
    return pos;
}
/*
 * this function finds and
 * returns position of
 * maximum element in array
 */
int *maxPosition(int *l, int *r) {
    int *pos, mx = -999;
    for (int *i = l; i < r; i++)
        if (*i > mx) {
            mx = *i;
            pos = i;
        }
    return pos;
}
/*
 * this function counts and
 * returns number of even
 * elements between min and max
 */
int countEven(int *l, int *r) {
    int c = 0;
    for (int *i = l+1; i < r; i++)
        if (*i % 2 == 0)
            c++;
    return c;
}
int main() {
    int n;
    // enter array size
    cin >> n;
    // create array with dynamic memory size
    int *arr = new int[n];
    read(arr, arr+n);
    int *minPos = minPosition(arr, arr+n);
    int *maxPos = maxPosition(arr, arr+n);
    cout << countEven(minPos, maxPos);
    // delete array and maxPos from memory
    delete[] arr;
    return 0;
}