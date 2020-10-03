// library for cin and cout
#include <iostream>
// std::
using namespace std;
// initialize 2 dimension array of integers
int arr[15][15];
// initialize 2 dimension array of boolean
// this array will store changes of the first 
// array during current event
bool arr2[15][15];
// this function gets position of a cell
// and returns number of neighbors
int countNeighbors(int x, int y) {
    int neighbors = 0;
    // in order to count neighbors we need to count
    // each cell withing range of 1 cell
    for (int i = x-1; i <= x+1; i++) {
        for (int j = y-1; j <= y+1; j++) {
            neighbors += arr[i][j];
        }
    }
    // do not count given cell as a neighbor
    if (arr[x][y]) neighbors--;
    return neighbors;
}
int main() {
    // initialize 2 integers
    int n, t;
    // input 2 variables
    cin >> n >> t;
    // start loop for rows
    for (int i = 1; i <= n; i++) {
        // start loop for columns
        for (int j = 1; j <= n; j++) {
            // input array element
            cin >> arr[i][j];
            // make boolean array on the same position
            // equal to the integer array
            arr2[i][j] = arr[i][j];
        }
    }
    // start loop for given amount of "seconds"
    while (t--) {
        // start loop for rows
        for (int i = 1; i <= n; i++) {
            // start loop for columns
            for (int j = 1; j <= n; j++) {
                // initialize integer that will 
                // hold number of neighbors for current cell
                int n = countNeighbors(i, j);
                // check given conditions
                // if current cell is 1 and number of neighbors
                // is less than 2 or more than 3, change cell
                // from one to zero
                if (arr[i][j] == 1 && (n < 2 || n > 3)) {
                    arr2[i][j] = false;
                }
                // check another condition
                // if current cell is 0 and number of neighbors
                // is exactly 3, change cell from zero to one
                if (arr[i][j] == 0 && n == 3) {
                    arr2[i][j] = true;
                }
            }
        }
        // arr - is actual array
        // arr2 - temporary array, that stores 
        // changes of arr for current event
        //
        // transfer changes from arr2 to arr
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                arr[i][j] = arr2[i][j];
            }
        }
    }
    // output the final array after all changes
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}