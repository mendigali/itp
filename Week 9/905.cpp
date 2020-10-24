#include <iostream>
#include <cstring>
using namespace std;
const int MAX_N = 1e3 + 1;
bool equalWords(char *s1, char *s2) {
    int i = 0;
    while (*(s1 + i) != '\0')
        i++;
    int size1 = i;
    i = 0;
    while (*(s2 + i) != '\0')
        i++;
    int size2 = i;
    if (size1 != size2)
        return false;
    for (i = 0; i < size1; i++)
        if (*(s1 + i) != *(s2 + i))
            return false;
    return true;
}
int exists(char *arr[], char *word, int size) {
    for (int i = 0; i < size; i++)
        if (equalWords(arr[i], word))
            return i;
    return -1;
}
void deleteDuplicates(char *text) {
    char *arr[MAX_N], delim[] = " ";
    char *token = strtok(text, delim);
    int i = 0;
    while (token) {
        if (exists(arr, token, i) == -1) {
            arr[i] = token;
            i++;
        }
        token = strtok(NULL, delim);
    }
    int n = i;
    for (i = 0; i < n; i++)
        cout << arr[i] << ' ';
}
int main() {
    char line[MAX_N];
    cin.getline(line, MAX_N);
    deleteDuplicates(line);
    return 0;
}