// library for cin and cout
#include <iostream>
// std::
using namespace std;
// initialize main function
int main() {
    // initialize 2 integers
    int n, ans = 0;
    // input variable
    cin >> n;
    // start loop for rows
    for (int i = 0; i < n; i++) {
        // start loop for columns
        for (int j = 0; j < n; j++) {
            // initialize integer
            int a;
            // input variable
            cin >> a;
            // when i is less than j
            // it means that elements if located
            // above main diagonal
            if (i < j) {
                // add element to sum
                ans += a;
            }
        }
    }
    // ouput answer
    cout << ans;
    // end of the main function
    return 0;
}