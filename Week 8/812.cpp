#include <iostream>
#include <string>
using namespace std;
/*
 * this function makes plain text
 * using cypher and number of positions
 */
void decrypt(char *word, int size, int k) {
    for (int i = 0; i < size; i++) {
        if (*(word+i)-65 < k)
            *(word+i) += 26;  
        *(word+i) -= k;
    }
}
int main() {
    string cypher;
    int k;
    // enter cypher and number of positions
    cin >> cypher;
    cin >> k;
    /* 
     * number of positions should be < 26
     * because result will be the same
     * if we enter any number > 26 or 
     * if we enter the same number-26
     * 
     * example is 30 and 4
     */
    k %= 26;
    decrypt(&cypher[0], cypher.length(), k);
    cout << cypher;
    return 0;
}