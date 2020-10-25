#include <iostream>
#include <cstring>
using namespace std;
// maximum length of input
const int MAX_N = 1e3 + 1;
/**
 * this function takes number and its length
 * and returns true if is divisible by 11
 * or false if not
 */
bool divisible(char *num, int size) {
    // odd - sum of digits from odd positions
    // even - sum of digits from even positions
    int odd = 0, even = 0, i = 0;
    // flag - indicates if first digit is on odd\
    position or not
    bool flag = (size % 2 == 0);
    while (*(num + i) != '\0') {
        if (flag)
            odd += *(num + i) - '0';
        else
            even += *(num + i) - '0';
        flag = !flag;
        i++;
    }
    // difference between even and odd sums
    int difference = even - odd;
    /**
     * if difference is less than 0, multiply
     * it by -1 to make it positive
     * (previously I have used function abs from cmath
     * but unfortunately contester gave me compilation
     * error for that)
     */
    if (difference < 0)
        difference *= -1;
    // if difference can be divided by 11\
    without reminder, than number can be divided by 11
    if (difference % 11 == 0)
        return true;
    // otherwise number cannot be divided by 11
    return false;
}
int main() {
    char num[MAX_N];
    cin.getline(num, MAX_N);
    /**
     * number can be divided by 11 if difference between
     * sum of digits on odd position and digits on even
     * positions can be divided by 11
     */
    cout << (divisible(num, strlen(num)) ? "YES" : "NO");
    return 0;
}