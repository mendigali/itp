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
 * write array which is stored
 * between 2 pointers
 */
void write(int *l, int *r) {
    for (int *i = l; i < r; i++)
        cout << *i << ' ';
}
int main() {
    int n;
    // enter array size
    cin >> n;
    // create array with dynamic memory size
    int *arr = new int[n];
    read(arr, arr+n);
    write(arr, arr+n);
    // delete array from memory
    delete[] arr;
    return 0;
}