#include <iostream>
using namespace std;
bool election(bool x, bool y, bool z) {
    return (x + y + z) / 2;
}
int main() {
    bool x, y, z;
    cin >> x >> y >> z;
    cout << election(x, y, z);
    return 0;
}