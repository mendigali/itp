#include <iostream>
#include <cstring>
using namespace std;
// maximum length of input
const int MAX_N = 1e3 + 1;
// exactly the same function as in 904
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
// also exactly the same as in 904
int exists(char *arr[], char *word, int size) {
    for (int i = 0; i < size; i++)
        if (equalWords(arr[i], word))
            return i;
    return -1;
}
void deleteDuplicates(char *text) {
    // arr - stores all distinct words
    char *arr[MAX_N], delim[] = " ";
    // token - current word
    char *token = strtok(text, delim);
    int i = 0;
    while (token) {
        // if current word doesn't exist\
        insert it into array
        if (exists(arr, token, i) == -1) {
            arr[i] = token;
            i++;
        }
        token = strtok(NULL, delim);
    }
    int n = i;
    // print all words from array
    for (i = 0; i < n; i++)
        cout << arr[i] << ' ';
}
int main() {
    char line[MAX_N];
    cin.getline(line, MAX_N);
    deleteDuplicates(line);
    return 0;
}