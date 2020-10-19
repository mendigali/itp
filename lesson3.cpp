#include <iostream>
using namespace std;
// способ 1
void getArray(int *start, int *finish) {
    for (int *i = start; i < finish; i++) {
        cin >> *i;
    }
}
void outputArray(int *start, int *finish) {
    for (int *i = finish-1; i >= start; i--) {
        cout << *i << ' ';
    }
}
// конец 1 способа

// способ 2
void standartInput(int size, int *arr){
    for (int i = 0; i < size; i++){
        cin >> *(arr+i);
    }
}
void standartOutput(int size, int *arr){
    for (int i = size-1; i >= 0; i--){
        cout << *(arr+i) << ' ';
    }
}
// конец 2 способа

// способ 3
int *inputArray(int size) {
    static int arr[100];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    return arr;
}
void outputArray(int size, int *arr){
    for (int i = size-1; i >= 0; i--){
        cout << *(arr+i) << ' ';
    }
}
// конец 3 способа
int main() {
    int n, arr[100];
    cin >> n;
    // 1 способ - создаем массив в int main
    getArray(arr, arr+n);
    outputArray(arr, arr+n);

    // 2 способ - создаем массив в int main
    standartInput(n, arr);
    standartInput(n, &arr[0]);
    // standartOutput(n, arr);

    // 3 способ - создаем массив внутри функции inputArray
    int *first = inputArray(n);
    outputArray(n, first);
    
    // int *p = inputArray(n);
    // outputArray(n, p);
    // standartInput(n, arr);
    // getArray(arr, arr+n);
    // for (int i = n-1; i >= 0; i--) {
    //     cout << *(p + i) << ' ';
    // }
    // outputArray(arr, arr+n);
    return 0;
}