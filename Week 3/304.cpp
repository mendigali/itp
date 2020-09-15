#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    double x, y, z;
    cin >> x >> y >> z;
    cout << min(x, min(y, z)) << ' ' << max(x, max(y, z));
    return 0;
}