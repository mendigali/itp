#include <iostream>
using namespace std;
bool isSign(char c) {
    char signs[] = {'+', '-', '*', '/'};
    for (int i = 0; i < 4; i++)
        if (c == signs[i])
            return true;
    return false;
}
bool isNumber(char c) {
    return (c >= '0' && c <= '9') ? true : false;
}
bool validate(char str[], int n) {
    for (int i = 0; i < n; i++) {
        if (!(isSign(str[i]) || isNumber(str[i])))
            return false;
        if (isSign(str[i]) && !(isNumber(str[i-1]) && isNumber(str[i+1])))
            return false;
    }
    if (isSign(str[0]) || isSign(str[n-1]))
        return false;
    return true;
}
int main() {
    int n;
    char str[1000];
    cin >> n >> str;
    if (!validate(str, n)) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}