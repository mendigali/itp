#include <iostream>
#include <string>
using namespace std;
// this function gets char and
// changes its case using ASCII code
// if char isn't alphabet letter nothing changes
// example: a = 97, A = 65
char changeCase(char x) {
    if (x >= 'a' && x <= 'z') return x - 32;
    else if (x >= 'A' && x <= 'Z') return x + 32;
    return x;
}
int main() {
    // create 2 strings
    // first is given, second is result
    string a, b;
    int i = 0;
    cin >> a;
    // start loop for each letter in string
    while (i < a.length()) {
        // change case of current letter and add it
        // to the back of result string
        b += changeCase(a[i]);
        i++;
    }
    cout << b;
    return 0;
}