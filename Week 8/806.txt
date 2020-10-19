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
 * this function prints only
 * odd elements of array
 */
void printOdd(int *l, int *r) {
    for (int *i = l; i < r; i++)
        if (*i % 2 == 1)
            cout << *i << ' ';
}
/*
 * this function prints only
 * even elements of array
 */
void printEven(int *l, int *r) {
    for (int *i = l; i < r; i++)
        if (*i % 2 == 0)
            cout << *i << ' ';
}
int main() {
    int n;
    // enter array size
    cin >> n;
    // create array with dynamic memory size
    int *arr = new int[n];
    read(arr, arr+n);
    printOdd(arr, arr+n);
    printEven(arr, arr+n);
    // delete array from memory
    delete[] arr;
    return 0;
}