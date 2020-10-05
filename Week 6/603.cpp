#include <iostream>
using namespace std;
bool myXor (bool x, bool y) {
    return x ^ y;
}
int main() {
    bool x, y;
    cin >> x >> y;
    cout << myXor(x, y);
    return 0;
}