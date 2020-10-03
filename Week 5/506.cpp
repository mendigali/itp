// library for cin and cout
#include <iostream>
// std::
using namespace std;
// initialize main function
int main() {
    // initialize 2 dimension array
    int arr[100][100], n;
    // input variable
    cin >> n;
    // start loop for rows
    for (int i = 0; i < n; i++) {
        // start loop for columns
        for (int j = 0; j < n; j++) {
            // input array element
            cin >> arr[i][j];
        }
    }
    // start loop for rows
    for (int i = 0; i < n; i++) {
        // start loop for columns
        for (int j = 0; j < n; j++) {
            // compare 2 elements symmetric to each other
            // relatively to main diagonal which goes from
            // top left corner to bottor right corner
            if (arr[i][j] != arr[j][i]) {
                // if elements are not equal
                // output NO and finish executing 
                // of main function
                cout << "NO";
                return 0;
            }
        }
    }
    // if all elements were equal to each other
    // ouput YES
    cout << "YES";
    // end of the main function
    return 0;
}