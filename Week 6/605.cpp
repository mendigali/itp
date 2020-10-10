#include <iostream>
using namespace std;
// initialize function which takes 2 integers
// and returns char according to which
// of them is greater by using nested ternary operator
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