#include <iostream> // library for cin and cout
using namespace std; // std::
int main() { // main function
    // initialize array on 105 elements
    // and 2 integer number equal to 0
    int arr[105], n = 0, num = 0;
    // start loop until num is not equal to -1
    while (num != -1) {
        cin >> num; // input number
        if (num != -1) { // check if it's not -1
            arr[n] = num; // add number to ad array
            n++; // increase counter
        }
    }
    // output number of elements in the array
    cout << n << '\n';
    // start loop
    for (int i = 0; i < n; i++) {
        // output element of array
        // and put space after that
        cout << arr[i] << ' ';
    }
    return 0; // end of the main function
}