#include <iostream> // library for cin and cout
#include <string> // library for string
#include <vector> // library for vector
using namespace std; // std::
int main() { // initialize main function
    int n; // initialize integer variable
    // initialize vector array on 26 elements
    // filled with zeros
    // in this array first element represents A
    // second element represents B
    // third element represents C
    // etc...
    vector<int> abc(26, 0);
    // initialize string
    string str;
    // input number and string
    cin >> n;
    cin >> str;
    // start loop
    for (int i = 0; i < n; i++) {
        // increase array element by 1
        // index of element that will be 
        // increased is calculated by converting
        // char into ASCII and subtracting 65
        // example: ASCII of A is 65
        // and index of increased element
        // will be 65 - 65 = 0
        abc[int(str[i]-65)]++;
    }
    // initialize integer
    int res = 0;
    // this loop will count number 
    // of different letters 
    for (int i = 0; i < 26; i++) {
        // if array element is greater
        // than zero, it means letter with this 
        // number was at least once in given string
        if (abc[i] > 0) {
            // increase counter
            res++;
        }
    }
    // output number of different letters
    cout << res << '\n';
    // start loop
    for (int i = 0; i < 26; i++) {
        // output letters that were
        // at least one time
        if (abc[i] > 0) {
            cout << char(i+65) << ' ' << abc[i] << '\n';
        }
    }
    return 0; // end of the main function
}