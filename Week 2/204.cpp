#include <iostream> // add standard input/output stream library
using namespace std; // write std:: by default
int main() { // declare main function
    int x, y, z; // declare 3 integer numbers
    cin >> x >> y >> z; // input 3 numbers by user
    cout << x * x + y - z / 2; // calculate given formula and console output the result
    return 0; // end of the main function
}