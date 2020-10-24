#include <iostream>
#include <cstring>
using namespace std;
const int MAX_N = 1e2 + 1;
void format(char *num, int size) {
    int i = 0, cnt = 0;
    if (size % 3 == 1) {
        cout << *num << ' ';
        i = 1;
    } else if (size % 3 == 2) {
        cout << *num << *(num + 1) << ' ';
        i = 2;
    }
    while (*(num + i) != '\0') {
        if (cnt == 3) {
            cout << ' ';
            cnt = 0;
        }
        cout << *(num + i);
        cnt++;
        i++;
    }
}
int main() {
    char num[MAX_N];
    cin.getline(num, MAX_N);
    format(num, strlen(num));
    return 0;
}