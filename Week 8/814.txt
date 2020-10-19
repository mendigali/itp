#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/*
 * this function returns number of 
 * steps to direction
 */
int findRange(char *s, int size) {
    string number = "";
    int answer;
    bool f = false;
    for (int i = 0; i < size; i++) {
        if (*(s + i) == ' ') {
            f = true;
        }
        if (f) {
            number += *(s + i);
        }
    }
    stringstream num(number);
	num >> answer;
    return answer;
}
int main() {
    int x = 0, y = 0;
    string str;
    while (getline(cin, str)) {
        int range = findRange(&str[0], str.length());
        // add number of steps to coordinate
        // according to direction
        switch (str[0]) {
            case 'N':
                y += range;
                break;
            case 'S':
                y -= range;
                break;
            case 'E':
                x += range;
                break;
            case 'W':
                x -= range;
                break;
        }
    }
    cout << x << ' ' << y;
    return 0;
}