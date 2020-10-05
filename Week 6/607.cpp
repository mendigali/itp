#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int N,M,a=0;
    int B[100];
    cin >> N >> M;
    int A[100][100];
    for (int i=0; i<N; i++){
        for (int j=0; j<M;j++){
            cin >> A[i][j];
        }
    }
    for (int i=0; i<N; i++){
      for (int j=0; j<M; j++){
        if (A[i][j]>0){
        B[a]=A[i][j];
        a++;
        }
      }
    }
    cout << a << endl;
    for (int i=0; i<a-1; i++) {
        for (int j=0; j<a-1;j++) {
            if (B[j] > B[j+1]){
                swap(B[j], B[j+1]);  
            }
        }
    }
    for (int i=0; i<a; i++) {
        cout << B[i] << ' ';
    }
    return 0;
}