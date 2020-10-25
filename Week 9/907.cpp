#include <iostream>
#include <cstring>
using namespace std;
// maximum length of input
const int MAX_N = 1e3 + 1;
/**
 * this function will compare 2 numbers
 * and return true if first is greater
 * than second or false otherwise
 */
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
    // arr[0] - will store maximum number
    char *arr[3], delim[] = " ", *token = strtok(line, delim);
    int i = 0;
    while (token) {
        arr[i] = token;
        i++;
        token = strtok(NULL, delim);
    }
    // compare first and second numbers
    if (!firstGreater(arr[0], arr[1]))
        // if second number is greater, change numbers
        swap(arr[0], arr[1]);
    // compare first and third numbers
    if (!firstGreater(arr[0], arr[2]))
        // if third number is greater, change numbers
        swap(arr[0], arr[2]);
    // output greatest number
    cout << arr[0];
}
int main() {
    char line[MAX_N];
    cin.getline(line, MAX_N);
    findMax(line);
    return 0;
}