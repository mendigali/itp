#include <iostream>
using namespace std;
int main() {
    int n;
    double result = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        result *= (1+1/double(i*i));
    }
    cout << result;
    return 0;
}