#include <iostream>
#include <cstring>
using namespace std;
// this function takes array of char
// and single char
// function return number of accurances
// of given letter in the array
int countAccurance(char arr[], char ch) {
    int result = 0;
    int arrLength = strlen(arr);
    for (int i = 0; i < arrLength; i++)
        if (arr[i] == ch)
            result++;
    return result;
}
int main() {
    char ch1, ch2;
    char str1[20], str2[20];
    // input letter that will be counted
    cin >> ch1 >> ch2;
    // input strings where letters will be counted
    cin >> str1;
    cin >> str2;
    // count first letter in the first string
    cout << countAccurance(str1, ch1) << ' ' << ch1 << " characters in " << str1 << endl;
    // count second letter in the second string
    cout << countAccurance(str2, ch2) << ' ' << ch2 << " characters in " << str2;
    return 0;
}