#include <iostream>
#include <cstring>
using namespace std;
const int MAX_N = 1e3 + 1;
bool findSubstring(char *str, int size) {
    if (size < 4)
        return false;
    int i = 3;
    while (i < size) {
        if (toupper(*(str + i)) == 'U') {
            char A = toupper(*(str + i - 3)),
                 I = toupper(*(str + i - 2)),
                 T = toupper(*(str + i - 1));
            if (A == 'A' && I == 'I' && T == 'T')
                return true;
        }
        i++;
    }
    return false;
}
int main() {
    char line[MAX_N];
    cin.getline(line, MAX_N);
    cout << (findSubstring(line, strlen(line)) ? "YES" : "NO");
    return 0;
}