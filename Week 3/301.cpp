#include <iostream> // library for cin and cout
using namespace std; // std:: by default
int main() { // main function
    double x, y, z; // initialize 3 double variables
    cin >> x >> y >> z; // input 3 variables
    if (x < y && y < z) { // check if x < y < z is true
        cout << "YES"; // if true output YES
    } else {
        cout << "NO"; // otherwise output NO
    }
    return 0; // end of the main function
}