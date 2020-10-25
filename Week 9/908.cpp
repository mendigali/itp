#include <iostream>
#include <cstring>
using namespace std;
// maximum length of input
const int MAX_N = 1e4 + 1;
/**
 * this function takes 2 parameters
 * which are pointers. first is pointer
 * to char array with number and second
 * is pointer to integer array which will store
 * number in reverse order
 */
void reverseNum(char *num, int *arr) {
    int size = strlen(num);
    for (int i = 0; i < size; i++)
        *(arr+i) = *(num+size-i-1)-'0';
}
void addVeryLongIntegers(char *num1, char *num2, char *num3) {
    int num1_rev[MAX_N], num2_rev[MAX_N];
    int sz1 = strlen(num1), sz2 = strlen(num2), sz3;
    reverseNum(num1, num1_rev);
    reverseNum(num2, num2_rev);
    // calculate length of result number
    if (sz1 > sz2)
        sz3 = sz1 + 1;
    else
        sz3 = sz2 + 1;
    for (int i = 0; i < sz3; i++) {
        // add digits of 1 and 2 numbers\
        from same position
        num1_rev[i] += num2_rev[i];
        // if number is greater than 10,\
        add 1 to next place
        num1_rev[i + 1] += (num1_rev[i] / 10);
        // current number cannot be greater than 10
        num1_rev[i] %= 10;
    }
    // if last digit is zero, than remove it
    if (num1_rev[sz3 - 1] == 0)
        sz3--;
    // move result number to num3 which is result array
    for (int i = sz3-1, j = 0; i >= 0; i--, j++)
        *(num3+j) = num1_rev[i]+'0';
}
int main() {
    char num1[MAX_N], num2[MAX_N], num3[MAX_N];
    cin >> num1; // read 1 number
    cin >> num2; // read 2 number
    // add them
    addVeryLongIntegers(num1, num2, num3);
    cout << num3; // print result number
    return 0;
}