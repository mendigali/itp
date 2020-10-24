#include <iostream>
#include <cstring>
using namespace std;
const int MAX_N = 1e3 + 1;
bool firstGreater(char *a, char *b) {
    int size1 = strlen(a), size2 = strlen(b);
    if (size1 > size2)
        return true;
    if (size1 < size2)
        return false;
    for (int i = 0; i < size1; i++) {
        if (*(a + i) > *(b + i))
            return true;
        if (*(a + i) < *(b + i))
            return false;
    }
    return true;
}
void findMax(char *line) {
    char *arr[3], delim[] = " ", *token = strtok(line, delim);
    int i = 0;
    while (token) {
        arr[i] = token;
        i++;
        token = strtok(NULL, delim);
    }
    if (!firstGreater(arr[0], arr[1]))
        swap(arr[0], arr[1]);
    if (!firstGreater(arr[0], arr[2]))
        swap(arr[0], arr[2]);
    cout << arr[0];
}
int main() {
    char line[MAX_N];
    cin.getline(line, MAX_N);
    findMax(line);
    return 0;
}