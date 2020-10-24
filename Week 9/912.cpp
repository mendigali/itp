#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;
const int MAX_N = 51;
double avgWordLength(char *text) {
    double letters = 0, words = 0;
    char prev = *text;
    for (int i = 0; *(text+i) != '\0'; i++) {
        if (isalpha(*(text+i)) != 0) {
            letters++;
        } else {
            if (isalpha(prev)) {
                words++;
            }
        }
        prev = *(text+i);
    }
    return double(letters/words);
}
int main() {
    char text[MAX_N];
    cin.getline(text, MAX_N);
    cout << setprecision(10) << avgWordLength(text);
    return 0;
}