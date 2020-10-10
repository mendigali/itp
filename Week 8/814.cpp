#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    int x = 0, y = 0;
    string str;
    while (getline(cin, str)) {
        stringstream num(str.substr(str.find(' ') + 1));
        int range;
	    num >> range;
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