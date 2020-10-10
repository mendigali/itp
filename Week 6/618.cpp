#include <iostream>
using namespace std;
// this function checks whether given 
// char is operator such as + - * /
// or not
bool isSign(char c) {
    char signs[] = {'+', '-', '*', '/'};
    for (int i = 0; i < 4; i++)
        if (c == signs[i])
            return true;
    return false;
}
// this function checks whether given
// char is number or not
bool isNumber(char c) {
    return (c >= '0' && c <= '9') ? true : false;
}
// this function checks given string
// for unallowed characters or repetition
// of operators multiple times in a row
bool validate(char str[], int n) {
    // loop through string by one character
    for (int i = 0; i < n; i++) {
        // check if character is allowed or not
        if (!(isSign(str[i]) || isNumber(str[i])))
            return false;
        // if current character is operator, then check chars on the left
        // and right
        if (isSign(str[i]) && !(isNumber(str[i-1]) && isNumber(str[i+1])))
            return false;
    }
    // also check first and last characters
    // and return false if it is operator
    if (isSign(str[0]) || isSign(str[n-1]))
        return false;
    return true;
}
int main() {
    int n;
    char str[1000];
    // input length and string
    cin >> n >> str;
    // if function returns true, then print YES
    // otherwise NO
    cout << (validate(str, n) ? "YES" : "NO");
    return 0;
}