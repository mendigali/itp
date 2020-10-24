#include <iostream>
#include <cstring>
using namespace std;
const int MAX_N = 1e3 + 1;
bool divisible(char *num, int size) {
    int odd = 0, even = 0, i = 0;
    bool flag = (size % 2 == 0);
    while (*(num + i) != '\0') {
        if (flag)
            odd += *(num + i) - '0';
        else
            even += *(num + i) - '0';
        flag = !flag;
        i++;
    }
    int difference = even - odd;
    if (difference < 0)
        difference *= -1;
    if (difference % 11 == 0)
        return true;
    return false;
}
int main() {
    char num[MAX_N];
    cin.getline(num, MAX_N);
    cout << (divisible(num, strlen(num)) ? "YES" : "NO");
    return 0;
}