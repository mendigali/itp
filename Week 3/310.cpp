#include <iostream> // library for cin and cout
using namespace std; // std:: by default
int main() { // main function
    int n, result = 1; // initialize 2 integers, 1 of them is equal to 1
    cin >> n; // input number
    // create loop from 1 until input number
    for (int i = 1; i <= n; i++) {
        // multiply result by 2
       result *= 2;
    }
    // output result
    cout << result;
    return 0; // end of the main function
}