#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;
// maximum length of input
const int MAX_N = 51;
/**
 * this function gets pointer to 
 * array with given text, calculates
 * average length of word and returns 
 * double variable which is average length
 */
double avgWordLength(char *text) {
    // letters - number of letters
    // words - number of words
    double letters = 0, words = 0;
    // prev - stores previous character
    char prev = *text;
    for (int i = 0; *(text+i) != '\0'; i++) {
        // check if current character is letter
        if (isalpha(*(text+i)) != 0) {
            letters++;
        }
        /**
         * if current character is not a letter
         * then check previous character
         * if it was letter then increment number
         * of words, if not then just skip it
         */
        else {
            if (isalpha(prev)) {
                words++;
            }
        }
        // after all actions, change previous\
        letter to current letter
        prev = *(text+i);
    }
    // return number of letters divided by number\
    of words
    return double(letters/words);
}
int main() {
    char text[MAX_N];
    cin.getline(text, MAX_N);
    // setprecisioin controls number of digits in\
    fractional part
    cout << setprecision(10) << avgWordLength(text);
    return 0;
}