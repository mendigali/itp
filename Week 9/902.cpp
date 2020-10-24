#include <iostream>
using namespace std;
const int MAX_N = 1e3 + 1;
void replace(char *source, char *dest) {
    int i = 0;
    while (*(source + i) != '\0') {
        if (*(source + i) == '!')
            *(source + i) = '.';
        *(dest + i) = *(source + i);
        i++;
    }
}
int main() {
    char line[MAX_N], answer[MAX_N];
    cin.getline(line, MAX_N);
    replace(&line[0], &answer[0]);
    cout << answer;
    return 0;
}