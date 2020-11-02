#include <iostream>
#include <cstring>
using namespace std;
const int MAX_N = 1e3 + 5;
void replaceExcept(char* s, int num) {
    for (int i = 0; *(s + i); i++)
        if (*(s + i) != char(num+'0'))
            *(s + i) = '-';
}
int countColor(char* s, int num) {
    int cnt = 0;
    for (int i = 0; *(s + i); i++)
        if (*(s + i) == char(num+'0'))
            cnt++;
    return cnt;
}
int main() {
    int black = 0; // 0
    int white = 0; // 1
    int red = 0; // 2
    int green = 0; // 3
    int i = 0;
    char* board[MAX_N];
    do {
        char* input = new char[MAX_N];
        cin >> input;
        if (strlen(input) < 2)
            break;
        black += countColor(input, 0);
        white += countColor(input, 1);
        red += countColor(input, 2);
        green += countColor(input, 3);
        replaceExcept(input, 2);
        board[i] = input;
        i++;
    } while (true);
    int n = i;
    if (black == 0 || white == 0 || red == 0 || green == 0) {
        cout << "BAD INPUT LIST";
    } else {
        for (i = 0; i < n; i++)
            cout << board[i] << endl;
        cout << endl;
        cout << black << ' ' << white << ' ' << red << ' ' << green;
    }
    for (i = 0; i < n; i++)
        delete[] board[i];
    return 0;
}