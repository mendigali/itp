#include <iostream> // library for cin and cout
using namespace std; // std:: by default
int main() { // main function
    double a, result = 0; // initialize 2 double variables, 1 of them equal to 0
    int n; // initialive integer
    cin >> a >> n; // input 2 numbers
    // loop from 1 until n including n
    for (int i = 1; i <= n; i++) {
        // add a to result
        result += a;
    }
    // output result
    cout << result;
    return 0; // end of the main function
}