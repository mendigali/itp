#include <iostream> // library for cin and cout
#include <algorithm> // library for min and max
using namespace std;  // std:: by default
int main() { // main function
    double x, y, z; // initialize 3 double variables
    cin >> x >> y >> z;  // input 3 variables
    cout << min(x, min(y, z)) << ' ' << max(x, max(y, z)); // use min and max functions to find minimum and maximum, after that output result
    return 0; // end of the main function
}