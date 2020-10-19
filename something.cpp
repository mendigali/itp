#include<iostream>
using namespace std;
int sula (int n) {
  cin>>n;
  int *pn=new int [n];
  int min=0, max=0, count=0, posmin, posmax;
  for (int i=0; i<n; i++) {
    cin>>*(pn+i);
  } 
  for (int i=0; i<n; i++) {
    if (*(pn+i)<min) {
    min=*(pn+i);
    posmin=i;
    }
  }
  for (int i=0; i<n; i++) {
    if (*(pn+i)>max) {
      max=*(pn+i);
      posmax=i;
    }
  }
  for (int i=posmin; i<=posmax; i++) {
    if (*(pn+i)%2==0)
    count++;
  }
  return count;
}
int main () {
  int n;
  cout<<sula(n);
  return 0;
}