#include <iostream>
using namespace std;
void func(int* a, int n)
{
  int sumax = -1000;
  int sumix = 1000;
  int countax = 0;
  int countin = 0;
  int s = 0;

  for (int i = 0; i < n; i++) {
    if (*(a + i) > sumax) {
      sumax = *(a + i);
      countax = i;
    }
    if (*(a + i) < sumix) {
      sumix = *(a + i);
      countin = i;
    }
  }
  if (countax < countin) {
    for (int c = countax+1; c < countin; c++) {
      if (*(a + c) % 2 == 0) {
        s++;
      }
    }
  }
  else if (countax > countin) {
    for (int j = countin+1; j < countax; j++) {
      if (*(a + j) % 2 == 0) {
        s++;
      }
    }
  }
  
  cout << s;
}
int main() {
  int a[100];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  func(&a[0], n);
}