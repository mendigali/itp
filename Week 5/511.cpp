// library for cin and cout
#include <iostream>
// std::
using namespace std;
// initialize main function
int main() {
    // initialize integer
    int n;
    // input varible
    cin >> n;
    // start loop for rows
    for (int i = 0; i < n; i++) {
        // initialize integer which is 
        // equal to square root of given number
        // minus i
        int num = n * n - i;
        // start loop for columns
        for (int j = 0; j < n; j++) {
            // decrease and output number
            cout << num - (j * n) << ' ';
        }
        // end of the line
        cout << endl;
    }
    // end of the main function
    return 0;
}