#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double result = 0;
    for (int i = 1; i <= 50; i++) {
        result += 1/pow(i, 3);
    }
    cout << result;
    return 0;
}