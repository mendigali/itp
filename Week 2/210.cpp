#include <iostream> // add standard input/output stream library
using namespace std; // write std:: by default
int main() { // declare main function
    double x, y; // declare 2 real numbers
    cin >> x >> y; // input 2 real numbers by user
    cout << ((x - 2 * y) * x) / (-2 * y); // calculate and console output result of the given formula
    return 0; // end of the main function
}