#include <iostream> // library for cin and cout
using namespace std; // std:: by default
int main() { // main function
    double x, y, z; // initialize 3 double variables
    cin >> x >> y >> z;  // input 3 variables
    // triangle can only be if 
    // length of each side is 
    // less than sum of 2 other sides
    if (x < y + z && y < x + z && z < x + y) { 
        cout << "YES"; // output YES
    } else {
        cout << "NO"; // output NO
    }
    return 0; // end of the main function
}