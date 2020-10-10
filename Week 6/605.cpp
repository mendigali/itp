#include <iostream>
using namespace std;
// initialize function 
char getSign(int x, int y) {
    return (x > y ? '>' : (x < y ? '<' : '='));
}
int main() {
    // initialize and input 2 integer variables
    int x, y;
    cin >> x >> y;
    // call a function which returns sign 
    // according to which number is greater
    cout << getSign(x, y);
    return 0;
}