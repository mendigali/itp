#include <iostream>
using namespace std;

// true = visokosniy
// false = NE visokosniy
bool visokosniy(int year) {
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
    int year;
    int month[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < 12; ++i) {
        cout << month[i] << " days in " << i + 1 << " month\n";
    }
    // cin >> year;
    // cout << visokosniy(year);
    return 0;
}