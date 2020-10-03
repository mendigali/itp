// library for cin and cout
#include <iostream>
// std::
using namespace std;
// initialize main function
int main() {
    // initialize 2 integer variables
    int n, m;
    // input 2 variables
    cin >> n >> m;
    // start loop for rows
    for (int i = 1; i <= n; i++) {
        // each odd line contains elements in ascending order
        // while each even line contains elements in descending order
        // so i made 2 different loop for odd and even lines
        if (i % 2 == 0) {
            for (int j = m * i - 1; j >= m * (i - 1); j--) {
                cout << j << ' ';
            }
        } else {
            for (int j = m * (i - 1); j <= m * i - 1; j++) {
                cout << j << ' ';
            }
        }
        // end of line
        cout << endl;
    }
    return 0;
}