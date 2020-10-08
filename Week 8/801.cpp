#include <iostream>
using namespace std;
void swap2(unsigned int *a, unsigned int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main() {
    unsigned int a, b;
    cin >> a >> b;
    swap2(&a, &b);
    cout << a << ' ' << b;
    return 0;
}