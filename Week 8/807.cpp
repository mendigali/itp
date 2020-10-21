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
 * this function finds and returns
 * sum of elements between zeros
 */
int sum(int *l, int *r) {
    int sum = 0, zero = 0;
    for (int *i = l; i < r; i++) {
        zero += (*i == 0);
        if (zero > 0 && zero < 2)
            sum += *i;
    }
    return sum;
}
int main() {
    int n;
    // enter array size
    cin >> n;
    // create array with dynamic memory size
    int *arr = new int[n];
    read(arr, arr+n);
    cout << sum(arr, arr+n);
    // delete array from memory
    delete[] arr;
    return 0;
}