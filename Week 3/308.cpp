#include <iostream> // library for cin and cout
using namespace std; // std:: by default
// exactly the same function
// as in 307 problem
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
    int year, day = 1; // initialize 2 integer and 1 of them is equal to 1
    cin >> year; // input number
    // start for loop which goes from 1
    // until input year
    for (int i = 1; i <= year; i++) {
        // because weekdays shift every year
        // day variable will be decreased
        // by 2 if leap year and by 1 if not leap year
        day -= isLeapYear(i) ? 2 : 1;
        // day variable shows weekday in number
        // for example 1 monday, 2 tuesday an so on
        // so this variable shouldn't be less than 1
        if (day < 1) day += 7;
    }
    cout << day; // output day
    return 0; // end of the main function
}