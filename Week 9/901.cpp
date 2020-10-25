#include <iostream>
#include <cstring>
using namespace std;
// maximum length of input
const int MAX_N = 1e3 + 1;
/**
 * this function takes 2 parameters
 * pointer to the begining of char array
 * and length of that array
 * 
 * then it will look for substring AITU
 * and return true if finds it or return
 * false if doesn't find
 */
bool findSubstring(char *str, int size) {
    /**
     * AITU is 4 letters
     * so if input is less then 4 letters
     * return false
     */
    if (size < 4)
        return false;
    int i = 3;
    while (i < size) {
        /**
         * if we find letter U then we will
         * check 3 previous letters
         */
        if (toupper(*(str + i)) == 'U') {
            char A = toupper(*(str + i - 3)),
                 I = toupper(*(str + i - 2)),
                 T = toupper(*(str + i - 1));
            if (A == 'A' && I == 'I' && T == 'T')
                return true;
        }
        i++;
    }
    return false;
}
int main() {
    /**
     * initialize char array
     * which will store input
     */
    char line[MAX_N];
    /**
     * input line
     */
    cin.getline(line, MAX_N);
    /**
     * call function and print YES or NO using ternary operator
     */
    cout << (findSubstring(line, strlen(line)) ? "YES" : "NO");
    return 0;
}