#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n, m, cnt = 0;
    bool t = true;
    cin >> n >> m;
    int a[n + 5][m + 5];
    for(int i = 0; i < n; ++i){
        if(t){
            t = false;
            for(int j = 0; j < m; ++j){
                a[i][j] = cnt;
                cnt++;
            }
        }else{
            t = true;
            for(int j = m - 1; j >= 0; --j){
                a[i][j] = cnt;
                cnt++;
            }
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int test = 1;
  while(test--){
    solution();
  }
  return 0;
}