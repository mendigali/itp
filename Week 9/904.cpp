#include <iostream>
#include <cstring>
using namespace std;
// maximum length of input
const int MAX_N = 1e3 + 1;
/**
 * this function compares 2 char arrays
 * and returns true if they are equal
 * or false if not
 */
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
/**
 * this function checks if given word
 * exists in given array
 * if word doesn't exist function returns -1
 * if it does exist it returns position in array
 * where this word is stored
 */
int exists(char *arr[], char *word, int size) {
    for (int i = 0; i < size; i++)
        if (equalWords(arr[i], word))
            return i;
    return -1;
}
// this function turns word into uppercase
void capitalize(char *word) {
    for (int i = 0; *(word + i) != '\0'; i++)
        *(word + i) = toupper(*(word + i));
}
void mostRecent(char *text, char *wordAns) {
    // arr - stores all words
    char *arr[MAX_N], delim[] = " ";
    // current word
    char *token = strtok(text, delim);
    // cnt - stores how many times each word\
    appears in the text
    // i - number of distinct words
    int cnt[MAX_N], i = 0, mx = 0, pos;
    // fill cnt with zeros
    for (int k = 0; k < MAX_N; k++)
        cnt[k] = 0;
    while (token) {
        // make current word uppercase
        capitalize(token);
        // call function exists for currenct word\
        and store result in index
        int index = exists(arr, token, i);
        // if word doesn't exist, store it in array\
        and increase total number of words 
        if (index == -1) {
            arr[i] = token;
            cnt[i] = 1;
            i++;
        }
        // if word exists in array, increase number of\
        occurances of this word
        else
            cnt[index]++;
        token = strtok(NULL, delim);
    }
    // n will store number of distinct words
    int n = i;
    // find position of word which exists\
    maximum number of times
    for (i = 0; i < n; i++) {
        if (cnt[i] > mx) {
            mx = cnt[i];
            pos = i;
        }
    }
    // copy that word into result array
    for (i = 0; *(arr[pos] + i) != '\0'; i++)
        *(wordAns + i) = *(arr[pos] + i);
}
int main() {
    char line[MAX_N], answer[MAX_N];
    cin.getline(line, MAX_N);
    mostRecent(line, answer);
    cout << answer;
    return 0;
}