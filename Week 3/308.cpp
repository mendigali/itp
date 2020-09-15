#include <iostream>
using namespace std;
bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 != 0) {
            return true;
        } else {
            if (year % 400 == 0) {
                return true;
            } else {
                return false;
            }
        }
    } else {
        return false;
    }
}
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int year, day = 1;
    cin >> year;
    for (int i = 1; i <= year; i++) {
        day -= isLeapYear(i) ? 2 : 1;
        if (day < 1) day += 7;
    }
    cout << day;
    return 0;
}