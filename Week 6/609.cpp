#include <iostream>
#include <cstring>
using namespace std;
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
    cin >> ch1 >> ch2;
    cin >> str1;
    cin >> str2;
    cout << countAccurance(str1, ch1) << ' ' << ch1 << " characters in " << str1 << endl;
    cout << countAccurance(str2, ch2) << ' ' << ch2 << " characters in " << str2;
    return 0;
}