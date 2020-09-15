#include <iostream>
using namespace std;
int main() {
    double x, y, z;
    cin >> x >> y >> z;
    if (x < y && y < z) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}