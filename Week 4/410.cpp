#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if (num == 1) {
        cout << "NO";
        return 0;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}