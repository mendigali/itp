#include <iostream> // library for cin and cout
using namespace std; // std::
int main() { // initialize main function
    // initialize char array on 1005 elements
    char arr[1005];
    // initialize 2 integer variables
    int n, result = 0;
    // input variable
    cin >> n;
    // start loop
    for (int i = 0; i < n; i++) {
        // input array element
        cin >> arr[i];
        // if element is A, increase counter
        if (arr[i] == 'A') result++;
    }
    // output result
    cout << result;
    return 0; // end of the main function
}