#include <iostream>
using namespace std;
/* 
 * this function swaps 2 elements by using xor
 * for example we have 2 numbers
 * a = 5 which in binary will be 0101
 * b = 13 which in binary will be 1101
 */
void swap2(unsigned int *a, unsigned int *b) {
    *a = *a ^ *b; // a = 0101 xor 1101 = 1000
    *b = *a ^ *b; // b = 1000 xor 1101 = 0101
    *a = *a ^ *b; // a = 1000 xor 0101 = 1101
    /* 
     * so after running this function we have
     * a = 1101 and b = 0101
     */
}
int main() {
    unsigned int a, b;
    cin >> a >> b;
    swap2(&a, &b);
    cout << a << ' ' << b;
    return 0;
}