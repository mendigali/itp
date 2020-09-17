#include <iostream> // library for cin and cout
#include <cmath> // library for sqrt
using namespace std; // std:: by default
int main() { // main function
    double a, b, c; // initialize 3 double variables
    cin >> a >> b >> c;  // input 3 variables
    double d = b * b - 4 * a * c; // calculate discriminant
    double x1 = (-b + sqrt(d)) / (2 * a); // calculate first root
    if (d > 0) { // if discriminant is greater than zero
        double x2 = (-b - sqrt(d)) / (2 * a); // calculate second root
        cout << x1 << ' ' << x2 << '\n'; // output first and second roots
    } else if (d == 0) { // if discriminant is equal to zero
        cout << x1 << '\n'; // output first root
    } else { // if two previous conditions were wrong then do this
        cout << "no solution" << '\n'; // output no solution
    }
    return 0; // end of the main function
}