#include <iostream>
#include <cstring>
using namespace std;
// maximum length of input
const int MAX_N = 1e2 + 1;
/**
 * this function gets 2 parameters
 * pointer to first element of char array
 * and length of that array
 */
void format(char *num, int size) {
    int i = 0, cnt = 0;
    /**
     * if length of number gives reminder 1
     * when divided by 3, then print first digit
     * of that number and put space
     * then make i equal 1 to skip this digit later
     */
    if (size % 3 == 1) {
        cout << *num << ' ';
        i = 1;
    }
    /**
     * if length of number gives reminder 2
     * when divided by 3, then print first 2 digits
     * of that number and put space
     * then make i equal 2 to skip these 2 digits later
     */
    else if (size % 3 == 2) {
        cout << *num << *(num + 1) << ' ';
        i = 2;
    }
    /**
     * start loop from i until end of array
     * and put space after each 3 digits
     */
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