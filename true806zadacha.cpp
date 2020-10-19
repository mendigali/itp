#include <iostream>
using namespace std;
void input(int *s, int *f) {
    for (int *i = s; i < f; i++) {
        cin >> *i;
    }
}
void odd(int *s, int *f) {
    for (int *i = s; i < f; i++) {
        if (*i % 2 == 1) {
            cout << *i << " ";
        }
    }
}
void even(int *s, int *f) {
    for (int *i = s; i < f; i++) {
        if (*i % 2 == 0) {
            cout << *i << " ";
        }
    }
}
int main() {
    int n, arr[100];
    cin >> n;
    input(arr, arr+n);
    odd(arr, arr+n);
    even(arr, arr+n);
    return 0;
}