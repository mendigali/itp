#include <iostream>
#include <cstring>
using namespace std;
bool compare(char *s1, int size1, char *s2, int size2) {
    if (size1 != size2)
        return false;
    for (int i = 0; i < size1; i++)
        if (*(s1 + i) != *(s2 + i))
            return false;
    return true;
}
int main() {
    char word [2][100];
    cin >> word[0];
    cin >> word[1];
    cout << (compare(&word[0][0], strlen(word[0]), &word[1][0], strlen(word[1])) ? "YES" : "NO");
    return 0;
}