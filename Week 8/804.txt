#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
/*
 * this function filters non letter characters
 * and returns filtered array
 */
char *filter(char *word) {
    static char new_word[100];
    for (int i = 0; i < 100; i++)
        new_word[i] = isalpha(*(word + i)) ? *(word + i) : '#';
    return new_word;
}
int main() {
    char word[100];
    // by default array will be filled with 
    // hash signs
    fill(word, word+100, '#');
    cin >> word;
    char *filtered_word = filter(word);
    // print filtered word
    for (int i = 0; i < 100; i++)
        if (*(filtered_word + i) != '#')
            cout << *(filtered_word + i);
    return 0;
}