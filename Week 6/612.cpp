#include <iostream>
#include <string>
using namespace std;
// this function gets char and
// makes it uppercase using ASCII code
// example: a = 97, A = 65
char makeUpperCase(char x) {
    if (x >= 'a' && x <= 'z') return x - 32;
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
        // add current letter in uppercase
        // to the back of result string
        b += makeUpperCase(a[i]);
        i++;
    }
    cout << b;
    return 0;
}