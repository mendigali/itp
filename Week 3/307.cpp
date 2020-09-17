#include <iostream> // library for cin and cout
using namespace std; // std:: by default
// this function checks if year is leap or not
// code is the same as 306 problem except 1 thing
// this function return true if leap year
// and return false if not leap year
// for example: isLeapYear(2020) will return true
// and isLeapYear(2019) will return false
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
    cin >> day >> month >> year; // input 3 integers
    // check if integers are negative or month > 12 or day > 31
    // ouput no if at least 1 statement true
    if (day < 1 || month < 1 || year < 1 || month > 12 || day > 31) {
        cout << "no";
    } else { // otherwise go here
        // array calendar contains number of days for each month except february
        int calendar[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        // here i use function to check if this year leap or not
        // if it is leap year then february will be 29 days
        // if not then 28 days
        calendar[1] = isLeapYear(year) ? 29 : 28;
        // here we check if input day is less than or equal to number of days
        // in this month
        // if it is less or equal then output yes, if not output not
        cout << (day <= calendar[month-1] ? "yes" : "no");
    }
    return 0;
}