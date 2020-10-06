#include <iostream>
#include <string>
using namespace std;
char changeCase(char x) {
    if (x >= 'a' && x <= 'z') return x - 32;
    else if (x >= 'A' && x <= 'Z') return x + 32;
    return x;
}
int main() {
    string a, b;
    int i = 0;
    cin >> a;
    while (i < a.length()) {
        b += changeCase(a[i]);
        i++;
    }
    cout << b;
    return 0;
}