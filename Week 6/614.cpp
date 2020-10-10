#include <iostream>
#include <string>
using namespace std;
// this function gets char and
// changes its case using ASCII code
// if char isn't alphabet letter, 
// function return space bar ' '
// example: a = 97, A = 65
char changeCase(char x) {
    if (x >= 'a' && x <= 'z') return x - 32;
    else if (x >= 'A' && x <= 'Z') return x + 32;
    return ' ';
}
int main() {
    // create 2 strings
    // first is given, second is result
    string a, b;
    int i = 0;
    cin >> a;
    // start loop for each letter in string
    while (i < a.length()) {
        // get result of changeCase function
        char c = changeCase(a[i]);
        // if function return not space bar
        // but something else, it means that it was
        // alphabet letter, so add it to result
        if (c != ' ') b += c;
        i++;
    }
    cout << b;
    return 0;
}