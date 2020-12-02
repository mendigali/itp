#include <iostream>
#include <cstring>
#include <string>
using namespace std;
// maximum length of input
const int MAX_N = 1e3 + 1;
// this function is the same as 903
void format(char *num, int size) {
    int i = 0, cnt = 0;
    if (size % 3 == 1) {
        cout << *num << " ";
        i = 1;
    } else if (size % 3 == 2) {
        cout << *num << *(num + 1) << " ";
        i = 2;
    }
    while (*(num + i) != '\0') {
        if (cnt == 3) {
            cout << " ";
            cnt = 0;
        }
        cout << *(num + i);
        cnt++;
        i++;
    }
}
void findNum(char *text) {
    /**
     * c - length of current number
     * mx - length of longest number
     */
    int c = 0, mx = -1, i;
    // longest number will be stored here
    string num = "";
    for (i = 0; *(text + i) != '\0'; i++) {
        // if character is digit, increase\
        length of current number
        if (isdigit(*(text + i)))
            c++;
        else {
            // if length of current number is\
            greater than maximum length\
            than store number itself in num
            if (c > mx)  {
                num = "";
                mx = c;
                for (int j = i-c; j < i; j++)
                    num += *(text + j);
            }
            c = 0;
        }
    }
    // this is in case input ended up with number
    if (c > mx)  {
        num = "";
        mx = c;
        for (int j = i-c; j < i; j++)
            num += *(text + j);
    }
    // print number
    format(&num[0], num.length());
}
int main() {
    char text[MAX_N];
    // input number
    cin.getline(text, MAX_N);
    // output longest number
    findNum(text);
    return 0;
}




#include <iostream>
#include <cstring>
#include <string>
using namespace std;
const int MAX_N = 1e3 + 1;
void format(char *num, int size) {
    int i = 0, cnt = 0;
    if (size % 3 == 1) {
        cout << *num << " ";
        i = 1;
    }
    else if (size % 3 == 2) {
        cout << *num << *(num + 1) << " ";
        i = 2;
    }
    while (*(num + i) != '\0') {
        if (cnt == 3) {
            cout << " ";
            cnt = 0;
        }
        cout << *(num + i);
        cnt++;
        i++;
    }
}
void findNum(char *text) {
    int c = 0, mx = -1, i;
    string num = "";
    for (i = 0; *(text + i) != '\0'; i++) {
        if (isdigit(*(text + i)))
            c++;
        else {
            if (c > mx)  {
                num = "";
                mx = c;
                for (int j = i-c; j < i; j++)
                    num += *(text + j);
            }
            c = 0;
        }
    }
    if (c > mx)  {
        num = "";
        mx = c;
        for (int j = i-c; j < i; j++)
            num += *(text + j);
    }
    format(&num[0], num.length());
}
int main() {
    char text[MAX_N];
    cin.getline(text, MAX_N);
    findNum(text);
    return 0;
}