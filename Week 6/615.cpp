#include <iostream>
#include <cmath>
using namespace std;
int convertToSeconds(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}
void convertFromSeconds(int ss) {
    int h = ss / 3600;
    int m = ss % 3600 / 60;
    int s = ss % 3600 % 60;
    cout << h/10 << h%10 << ':' << m/10 << m%10 << ':' << s/10 << s%10;
}
int main() {
    int h1, m1, s1;
    int h2, m2, s2;
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;
    int ss1 = convertToSeconds(h1, m1, s1);
    int ss2 = convertToSeconds(h2, m2, s2);
    convertFromSeconds(abs(ss1 - ss2));
    return 0;
}