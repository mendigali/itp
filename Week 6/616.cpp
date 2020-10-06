#include <iostream>
using namespace std;
int power(int a, int b) {
    int result = 1;
    for (int i = 1; i <= b; i++) {
        result *= a;
    }
    return result;
}
int binaryToDecimal(int n, char binary[]) {
    int answer = 0, c = 0;
    for (int i = n-1; i >= 0; i--) {
        int cur = (binary[i] == '0' ? 0 : 1);
        if (cur) {
            answer += power(2, c);
        }
        c++;
    }
    return answer;
}
int main() {
    int n;
    char binary[31];
    cin >> n >> binary;
    cout << binaryToDecimal(n, binary);
    return 0;
}