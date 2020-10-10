#include <iostream>
#include <string>
using namespace std;
string palindrom(char *word, int size) {
    for (int i = 0; i < size; i++)
        if (*(word + i) != *(word + size - i - 1))
            return "NO";
    return "YES";
}
int main() {
    string word;
    getline(cin, word);
    cout << palindrom(&word[0], word.length());
    return 0;
}