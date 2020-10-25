#include <iostream>
using namespace std;
// maximum length of input
const int MAX_N = 1e3 + 1;
/**
 * this function gets 2 parameters
 * pointers to char arrays with given text
 * and with answer
 */
void replace(char *source, char *dest) {
    int i = 0;
    while (*(source + i) != '\0') {
        /**
         * if current symbol is ! then change it to .
         */
        if (*(source + i) == '!')
            *(source + i) = '.';
        *(dest + i) = *(source + i);
        i++;
    }
}
int main() {
    /**
     * initialize 2 char arrays
     * and input one of them
     */
    char line[MAX_N], answer[MAX_N];
    cin.getline(line, MAX_N);
    replace(&line[0], &answer[0]);
    /**
     * output result after calling function
     */
    cout << answer;
    return 0;
}