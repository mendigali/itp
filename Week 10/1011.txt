#include <iostream>
using namespace std;
int main() {
    char ch, t;
    // cnt counts opening brace (
    int cnt = 0;
    bool ans = true;
	while (cin >> ch) {
        if (ans) {
            // add opening brace
            if (ch == '(')
                cnt++;
            // if first brace was closing
            if (cnt < 1) 
                ans = false;
            // opening and closing braces\
            cancel each other
            if (ch == ')' && ans)
                cnt--;
        }
	}
    // if ans false or didn't canceled all braces
	if (!ans || cnt != 0)
        cout << "INVALID";
    else
        cout << "VALID";
	return 0;
}