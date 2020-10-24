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
void capitalize(char *word) {
    for (int i = 0; *(word + i) != '\0'; i++)
        *(word + i) = toupper(*(word + i));
}
void mostRecent(char *text, char *wordAns) {
    char *arr[MAX_N], delim[] = " ";
    char *token = strtok(text, delim);
    int cnt[MAX_N], i = 0, mx = 0, pos;
    for (int k = 0; k < MAX_N; k++)
        cnt[k] = 0;
    while (token) {
        capitalize(token);
        int index = exists(arr, token, i);
        if (index == -1) {
            arr[i] = token;
            cnt[i] = 1;
            i++;
        } else
            cnt[index]++;
        token = strtok(NULL, delim);
    }
    int n = i;
    for (i = 0; i < n; i++) {
        if (cnt[i] > mx) {
            mx = cnt[i];
            pos = i;
        }
    }
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