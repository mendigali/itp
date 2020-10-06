#include <iostream>
#include <string>
using namespace std;
char makeUpperCase(char x) {
    if (x >= 'a' && x <= 'z') return x - 32;
    return x;
}
int main() {
    string a, b;
    int i = 0;
    cin >> a;
    while (i < a.length()) {
        b += makeUpperCase(a[i]);
        i++;
    }
    cout << b;
    return 0;
}