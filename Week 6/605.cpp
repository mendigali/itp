#include <iostream>
using namespace std;
char getSign(int x, int y) {
    return (x > y ? '>' : (x < y ? '<' : '='));
}
int main() {
    int x, y;
    cin >> x >> y;
    cout << getSign(x, y);
    return 0;
}