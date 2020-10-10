#include <iostream>
#include <cstring>
using namespace std;
// exactly the same function as in 609 and 610
int countAccurance(char arr[], char ch) {
    int result = 0;
    int arrLength = strlen(arr);
    for (int i = 0; i < arrLength; i++)
        if (arr[i] == ch)
            result++;
    return result;
}
int main() {
    int n;
    cin >> n;
    char letter[100];
    char word[100][20];
    for (int i = 0; i < n; i++)
        cin >> letter[i] >> word[i];
    // everything is the same as 610 except 
    // output in reverse order
    for (int i = n-1; i >= 0; i--)
        cout << countAccurance(word[i], letter[i]) << ' ' << letter[i] << " in " << word[i] << endl;
    return 0;
}