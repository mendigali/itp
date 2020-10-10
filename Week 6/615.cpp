#include <iostream>
#include <cmath>
using namespace std;
// this function takes number of hours, minute, seconds
// and returns it as just seconds
int convertToSeconds(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}
// this function takes number of seconds
// and converts it to hours, minutes, seconds
void convertFromSeconds(int ss) {
    int h = ss / 3600;
    int m = ss % 3600 / 60;
    int s = ss % 3600 % 60;
    cout << h/10 << h%10 << ':' << m/10 << m%10 << ':' << s/10 << s%10;
}
int main() {
    // initialize variables for hours, minutes, seconds
    int h1, m1, s1;
    int h2, m2, s2;
    // input variables
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;
    // time number 1 but converted to seconds
    int ss1 = convertToSeconds(h1, m1, s1);
    // time number 2 but converted to seconds
    int ss2 = convertToSeconds(h2, m2, s2);
    // find difference between two hours and convert
    // it back to hours, minutes, seconds
    convertFromSeconds(abs(ss1 - ss2));
    return 0;
}