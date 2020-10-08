#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
char *filter(char *word) {
    static char new_word[100];
    int c = 0;
    for (int i = 0; i < 100; i++)
        new_word[c++] = isalpha(*(word + i)) ? *(word + i) : '#';
    return new_word;
}
int main() {
    char word[100];
    fill(word, word+100, '#');
    cin >> word;
    char *first = filter(&word[0]);
    for (int i = 0; i < 100; i++)
        if (*(first + i) != '#')
            cout << *(first + i);
    return 0;
}