#include <iostream>
using namespace std;
string compare(int n) {
    int arr1[100], arr2[100];
    int pos1 = 0, pos2 = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
        if (arr1[i] > 0) pos1++;
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
        if (arr2[i] > 0) pos2++;
    }
    if (pos1 > pos2) {
        return "Number of positives in the first array is greater";
    } else if (pos1 < pos2) {
        return "Number of positives in the second array is greater";
    } else {
        return "Numbers are equal";
    }
}
int main() {
    int n;
    cin >> n;
    cout << compare(n);
    return 0;
}