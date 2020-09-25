#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<char> prime (n+1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; i++){
        if (prime[i]){
            if (i * i <= n) {
                for (int j = i * i; j <= n; j += i) {
                    prime[j] = false;
                }
            } 
        }
    }
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            cout << i << ' ';
        }
    }
}