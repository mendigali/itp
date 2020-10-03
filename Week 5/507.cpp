// library for cin and cout
#include <iostream>
// std::
using namespace std;
// initialize main function
int main() {
    // initialize 2 integers
    int n, ans = 0;
    // input varible
    cin >> n;
    // start loop for rows
    for (int i = 0; i < n; i++) {
        // start loop for columns
        for (int j = 0; j < n; j++) {
            // initialize integer
            int a;
            // input varible
            cin >> a;
            // when j is less than i
            // it means that element 
            // located below main diagonal
            if (j < i) {
                // add element to sum
                ans += a;
            }
        }
    }
    // output answer
    cout << ans;
    // end of the main function
    return 0;
}