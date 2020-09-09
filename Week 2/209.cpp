#include <iostream> // add standard input/output stream library
using namespace std; // write std:: by default
int main() { // declare main function
    double k, c; // declare 2 real numbers
    cin >> k >> c; // input 2 real numbers by user
    // 3 lines of code below do console ouput text given in the problem,
    // calculate result of given formula and go to the next line
    cout << "x = 0.1 : y = " << k * 0.1 + c << endl;
    cout << "x = 1 : y = " << k + c << endl;
    cout << "x = 5 : y = " << k * 5 + c << endl;
    return 0; // end of the main function
}