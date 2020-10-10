#include <iostream>
using namespace std;
// initialize function that takes 3 bool 
// variables and returns most common among them
bool election(bool x, bool y, bool z) {
    return (x + y + z) / 2;
}
int main() {
    // initialize and input 3 bool variables
    bool x, y, z;
    cin >> x >> y >> z;
    // call function that makes returns
    // most common among 3 variables
    cout << election(x, y, z);
    return 0;
}