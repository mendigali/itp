#include <iostream>
using namespace std;
// initialize a function which takes
// 4 integer numbers and returns
// 1 integer number that is minimum
int min(int a, int b, int c, int d) {
    if (a <= b && a <= c && a <= d) return a;
    else if (b <= a && b <= c && b <= d) return b;
    else if (c <= a && c <= b && c <= d) return c;
    else return d;
}
int main() {
    // initialize and input 4 integer numbers
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // call a function which return minimum
    // out of 4 number
    cout << min(a, b, c, d);
    return 0;
}