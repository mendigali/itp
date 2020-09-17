#include <iostream> // library for cin and cout
#include <cmath> // library for abs
using namespace std; // std:: by default
int main() { // main function
    double a, b, c; // initialize 3 double variables
    cin >> a >> b >> c;  // input 3 variables
    if (a <= b && b <= c) { // check if a <= b <= c is true
        cout << a * 2 << '\n' << b * 2 << '\n' << c * 2; // if true output each number multiplied by 2
    } else {
        cout << abs(a) << ' ' << abs(b) << ' ' << abs(c); // otherwise ouput absolute value of each number
    }
    return 0; // end of the main function
}