#include <iostream>
#include <cstring>
using namespace std;
const int MAX_N = 1e4 + 1;
bool equalWords(char *s1, char *s2) {
    for (int i = 0; i < 5; i++)
        if (*(s1 + i) != *(s2 + i))
            return false;
    return true;
}
int countArrows(char *text, int size) {
    if (size < 5)
        return 0;
    int result = 0;
    char str1[] = {">>-->\0"};
    char str2[] = {"<--<<\0"};
    for (int i = 4; i < size; i++) {
        char str3[] = {
            *(text + i - 4),
            *(text + i - 3),
            *(text + i - 2),
            *(text + i - 1),
            *(text + i),
            '\0'
        };
        result += (equalWords(str1, str3));
        result += (equalWords(str2, str3));
    }
    return result;
}
int main() {
    char line[MAX_N];
    cin.getline(line, MAX_N);
    cout << countArrows(line, strlen(line));
    return 0;
}