#include <iostream>
using namespace std;
int main() {
    double k, c;
    cin >> k >> c;
    cout << "x = 0.1 : y = " << k * 0.1 + c << endl;
    cout << "x = 1 : y = " << k + c << endl;
    cout << "x = 5 : y = " << k * 5 + c << endl;
    return 0;
}