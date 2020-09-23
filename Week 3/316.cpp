#include <iostream> // library for cin and cout
using namespace std; // std:: by default
int main() { // main function
    double a, result; // initialize 2 double variables
    int n; // initialize integer
    cin >> a >> n; // input 2 numbers
    result = a; // make result be equal to a
    // loop from 1 until n not including n
    for (int i = 1; i < n; i++) {
        // multiply result by sum of a and i
        result *= a + i;
    }
    // output result
    cout << result;
    return 0; // end of the main function
}

#include <iostream>
using namespace std;
int main() {
    double a;
    int n;
    cin >> a >> n;
    double b = a;
    for (int i = 1; i < n; i++) {
        b *= a + i;
    }
    cout << b;
    return 0;
}