#include <iostream>
using namespace std;
// initialize function that
// takes 2 bool variables 
// and outputs xor of this 
// variables
bool myXor (bool x, bool y) {
    return x ^ y;
}
int main() {
    // initialize and input 2 bool variables
    bool x, y;
    cin >> x >> y;
    // call function that takes 2 bool 
    // variables and xor them
    cout << myXor(x, y);
    return 0;
}