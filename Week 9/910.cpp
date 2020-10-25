#include <iostream>
#include <cstring>
using namespace std;
// maximum length of input
const int MAX_N = 1e4 + 1;
/**
 * this function takes 2 parameters
 * which are pointers to char arrays
 * function returns true if this arrays
 * are equal and false if not
 */
bool equalWords(char *s1, char *s2) {
    for (int i = 0; i < 5; i++)
        if (*(s1 + i) != *(s2 + i))
            return false;
    return true;
}
/**
 * this function gets pointer to
 * first element of char array and
 * its size
 * function returns number of arrows
 * in given char array
 */
int countArrows(char *text, int size) {
    /** 
     * arrow is 5 characters length
     * so if given text if less than
     * 5 symbols, then return 0
     */
    if (size < 5)
        return 0;
    // result - counts number of arrows
    int result = 0;
    /**
     * str1 and str2 are substring that
     * we are searching for
     */
    char str1[] = {">>-->\0"};
    char str2[] = {"<--<<\0"};
    for (int i = 4; i < size; i++) {
        // str3 will store current substring 
        char str3[] = {
            *(text + i - 4),
            *(text + i - 3),
            *(text + i - 2),
            *(text + i - 1),
            *(text + i),
            '\0'
        };
        /** 
         * compare current substring with 
         * substrings that we are searching
         * and increase result if any of them 
         * matches
         */
        result += (equalWords(str1, str3));
        result += (equalWords(str2, str3));
    }
    // return number of arrows that we found
    return result;
}
int main() {
    char line[MAX_N];
    cin.getline(line, MAX_N);
    cout << countArrows(line, strlen(line));
    return 0;
}