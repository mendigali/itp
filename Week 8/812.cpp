#include <iostream>
#include <string>
using namespace std;
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
    cin >> cypher;
    cin >> k;
    k %= 26;
    decrypt(&cypher[0], cypher.length(), k);
    cout << cypher;
    return 0;
}