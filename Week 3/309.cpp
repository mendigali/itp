#include <iostream> // library for cin and cout
using namespace std; // std:: by default
// this is again the same function
// as in previous problems
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
int main() { // main function
    int day, month, year; // initialize 3 integers
    cin >> day >> month >> year; // input 3 numbers
    // array calendar contains number of days for each month except february
    int calendar[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // find number of days in february
    calendar[1] = isLeapYear(year) ? 29 : 28;
    day++; // increase number of days by 1
    // if number of days is more than possible number of days in this month
    // then reset days to 1 and increase month by 1
    if (day > calendar[month-1]) {
        day = 1;
        month++;
    }
    // if month is more than 12
    // reset month to 1 and increase year by 1
    // NOTE that BOTH statements (30 and 37 lines) will be checked
    if (month > 12) {
        month = 1;
        year++;
    }
    // output day, month, year
    cout << day << ' ' << month << ' ' << year;
    return 0; // end of the main function
}