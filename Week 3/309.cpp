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
    int calendar[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    calendar[1] = isLeapYear(year) ? 29 : 28;
    day++;
    if (day > calendar[month-1]) {
        day = 1;
        month++;
    }
    if (month > 12) {
        month = 1;
        year++;
    }
    cout << day << ' ' << month << ' ' << year;
    return 0;
}