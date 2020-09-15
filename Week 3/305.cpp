#include <iostream>
using namespace std;
int main() {
    double x, y, z;
    cin >> x >> y >> z;
    if (x < y + z && y < x + z && z < x + y) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}