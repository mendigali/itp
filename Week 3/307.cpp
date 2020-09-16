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
    int day, month, year;
    cin >> day >> month >> year;
    if (day < 1 || month < 1 || year < 1 || month > 12 || day > 31) {
        cout << "no";
    } else {
        int calendar[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        calendar[1] = isLeapYear(year) ? 29 : 28;
        cout << (day <= calendar[month-1] ? "yes" : "no");
    }
    return 0;
}