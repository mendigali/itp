#include <iostream>
using namespace std;
bool people[500];
int main() {
    int n, k;
    cin >> n >> k;
    int alive = n, cnt = 0;
    while (alive > 1) {
        for (int i = 1; i <= n; i++) {
            if (people[i] == false) {
                cnt++;
                if (cnt == k) {
                    people[i] = true;
                    cnt = 0;
                    alive--;
                    if (alive == 1) {
                        break;
                    }
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (people[i] == false) {
            cout << i;
            return 0;
        }
    }
}