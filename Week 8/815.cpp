#include <iostream>
using namespace std;
int addDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}
int countCombinations(int num, int l, int r) {
    int cnt = 0;
    for (int i = l; i <= r; i++)
        if (addDigits(i) == num)
            cnt++;
    return cnt;
}
int possibleSum[37], answer;
int main() {
    int M, N;
    cin >> M >> N;
    int ML = M / 10000, MR = M % 10000;
    int NL = N / 10000, NR = N % 10000;
    int sumOfDigitsML = addDigits(ML), sumOfDigitsNL = addDigits(NL);
    if (ML == NL) {
        cout << countCombinations(sumOfDigitsML, MR, NR);
        return 0;
    }
    int combNum1 = countCombinations(sumOfDigitsML, MR, 9999);
    int combNum2 = countCombinations(sumOfDigitsNL, 1, NR);
    answer += combNum1 + combNum2;
    ML++;
    NL--;
    for (int i = ML; i <= NL; i++)
        possibleSum[addDigits(i)]++;
    for (int i = 1; i <= 36; i++)
        if (possibleSum[i] > 0) {
            combNum1 = countCombinations(i, ML, NL);
            combNum2 = countCombinations(i, 1, 9999);
            answer += combNum1 * combNum2;
        }
    cout << answer;
    return 0;
}