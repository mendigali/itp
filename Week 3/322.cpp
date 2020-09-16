#include <iostream>
using namespace std;
int main() {
    int n = 103;
    double result = 103;
    while (n > 1) {
        n -= 2;
        result = (1 / result) + n;
    }
    cout << 1 / result;
    return 0;
}