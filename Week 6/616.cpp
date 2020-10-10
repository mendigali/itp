#include <iostream>
using namespace std;
// this function takes number to power
int power(int a, int b) {
    int result = 1;
    for (int i = 1; i <= b; i++)
        result *= a;
    return result;
}
// this function takes length of binary number
// and binary number itself as a char array
int binaryToDecimal(int n, char binary[]) {
    // c - it will be used as power of 2
    int answer = 0, c = 0;
    // start from the right side of binary number
    // and go to the left
    for (int i = n-1; i >= 0; i--) {
        // convert current binary number from char to int
        int cur = (binary[i] == '0' ? 0 : 1);
        // if current number is 1, then add appropriate
        // power of two to the answer 
        if (cur) answer += power(2, c);
        c++;
    }
    return answer;
}
int main() {
    // initialize length of binary number
    int n;
    // this array will store binary number
    char binary[31];
    // input length and binary number
    cin >> n >> binary;
    // call function to convert from binary to decimal
    cout << binaryToDecimal(n, binary);
    return 0;
}