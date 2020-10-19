#include <iostream>
using namespace std;
void input(int *s, int *f) {
    for (int *i = s; i < f; i++) {
        cin >> *i;
    }
}
int *findMax(int *s, int *f) {
    int mx = -999;
    int *pos;
    for (int *i = s; i < f; i++) {
        if (*i >= mx) {
            mx = *i;
            pos = i;
        }
    }
    return pos;
}
int sum(int *s, int *f) {
    int answer = 0;
    for (int *i = s; i < f; i++) {
        if (*i > 0) {
            answer += *i;
        }
    }
    return answer;
}
int main() {
    int n, arr[100];
    cin >> n;
    input(arr, arr+n);
    int *max_pos = findMax(arr, arr+n);
    cout << sum(arr, max_pos-1);
    return 0;
}