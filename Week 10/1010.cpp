#include <iostream>
#include <cstring>
using namespace std;
const int MAX_N = 1e3 + 5;
/**
 * This function replaces every symbol 
 * with dash(-) except num symbol
 */
void replaceExcept(char* s, int num) {
    for (int i = 0; *(s + i); i++)
        if (*(s + i) != char(num+'0'))
            *(s + i) = '-';
}
/**
 * This function counts how many
 * times given number repeated in
 * char array
 */
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
    // board is stored here
    char* board[MAX_N];
    do {
        char* input = new char[MAX_N];
        // get single row
        cin >> input;
        // if size of row is less than 2
        // finish loop
        if (strlen(input) < 2)
            break;
        /**
         * count how many times
         * each number repeats in single row
         */
        black += countColor(input, 0);
        white += countColor(input, 1);
        red += countColor(input, 2);
        green += countColor(input, 3);
        // modify row, by replacing everything
        // except 2, with dash(-)
        replaceExcept(input, 2);
        board[i] = input;
        i++;
    } while (true);
    // number of rows
    int n = i;
    // if any of this number didn't appeared,
    // output "bad input list"
    if (black == 0 || white == 0 || red == 0 || green == 0) {
        cout << "BAD INPUT LIST";
    } else {
        // otherwise print modified board
        for (i = 0; i < n; i++)
            cout << board[i] << endl;
        cout << endl;
        // and how many times each color repeated
        cout << black << ' ' << white << ' ' << red << ' ' << green;
    }
    // clear memory
    for (i = 0; i < n; i++)
        delete[] board[i];
    return 0;
}