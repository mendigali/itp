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
    char input[MAX_N], answer[MAX_N];
    cin.getline(input, MAX_N);
    replace(input, answer);
    cout << answer;
    return 0;
}