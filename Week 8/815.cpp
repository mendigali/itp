#include <iostream>
using namespace std;
/*
 * this function calculates sum
 * of digits for given number
 */
int addDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}
/*
 * this function finds amount of numbers
 * where sum of digits is equal to given number num
 * on a specific range from l until r
 * 
 * example countCombinations(13, 1000, 8000) will 
 * return how many numbers between 1000 and 8000
 * have sum of digits equal to 13
 */
int countCombinations(int *num, int l, int r) {
    int cnt = 0;
    for (int i = l; i <= r; i++)
        if (addDigits(i) == *num)
            cnt++;
    return cnt;
}
int possibleSum[37], answer;
int main() {
    int M, N;
    // enter first and last tickets
    cin >> M >> N;
    // divide first ticket into left and right sides
    int ML = M / 10000, MR = M % 10000;
    // divide last ticket into left and right sides
    int NL = N / 10000, NR = N % 10000;
    // find sum of digits of left sides of both first and last numbers
    int sumOfDigitsML = addDigits(ML), sumOfDigitsNL = addDigits(NL);
    // check if left side of first ticket is equal to 
    // left side of last ticket
    if (ML == NL) {
        cout << countCombinations(&sumOfDigitsML, MR, NR);
        return 0;
    }
    // calculate amount of lucky tickets where left side
    // is equal to left side of numbers M and N
    answer += countCombinations(&sumOfDigitsML, MR, 9999);
    answer += countCombinations(&sumOfDigitsNL, 1, NR);
    // exclude tickets where we have already calculated 
    // number of lucky tickets
    ML++;
    NL--;
    // find possible sum of left digits
    for (int i = ML; i <= NL; i++)
        possibleSum[addDigits(i)]++;
    for (int i = 1; i <= 36; i++)
        /* 
         * if number i can be the sum of left side
         * then calculate amount of numbers which 
         * give i from rigth side
         */
        if (possibleSum[i] > 0) {
            int combinations = countCombinations(&i, 1, 9999);
            answer += combinations * possibleSum[i];
        }
    cout << answer;
    return 0;
}