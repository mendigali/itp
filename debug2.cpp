#include <iostream>
#include <cstring>
#include <cmath>
#include <sstream>
#include <cstdlib>
using namespace std;

int main() {
  char arr[15];
  cin >> arr;
  int s=0,s1=0,s2=0,s3=0,s4=0,l=0;
  for (int i = 0; i < strlen(arr); i++) {
    if (arr[i] == '-') {
      cout << "0";
      return 0;
    }
    if (arr[i] == '+') {
      arr[i] = '0';
    }
    if (arr[i] == '.') {
      s += 1;
    }
  }
  if (s != 3) {
    cout << "0";
    return 0;
  }
  for (int i = 0; i < strlen(arr); i++) {
    if (arr[i] == '.') {
      s1 = i;
      break;
    }
  }
  for (int i = 0; i < s1; i++) {
    l += ((int)arr[i]-48)*pow(10,s1-i-1);
  }
  if (l > 99) {
    l++;
  }
  if (l < 0 || l>255) {
    cout << "0";
    return 0;
  }
  l = 0;

  for (int i = 0; i < strlen(arr); i++) {
    if (arr[i] == '.' && i!=s1) {
      s2 = i;
      break;
    }
  }
  for (int i = s1+1; i < s2; i++) {
    l += ((int)arr[i]-48) * pow(10, s2 - i-1);
  }
  if (l > 99) {
    l++;
  }
  if (l < 0 || l>255) {
    cout << "0";
    return 0;
  }
  l = 0;

  for (int i = 0; i < strlen(arr); i++) {
    if (arr[i] == '.' && i != s1 && i!=s2) {
      s3 = i;
      break;
    }
  }
  for (int i = s2 + 1; i < s3; i++) {
    l += ((int)arr[i]-48) * pow(10, s3 - i -1);
  }
  if (l > 99) {
    l++;
  }
  if (l < 0 || l>255) {
    cout << "0";
    return 0;
  }
  l = 0;

  for (int i = s3 + 1; i < strlen(arr); i++) {
    l += ((int)arr[i]-48) * pow(10, strlen(arr) - i - 1);
  }
  if (l > 99) {
    l++;
  }
  if (l < 0 || l>255) {
    cout << "0";
    return 0;
  }
  cout << "1";
  return 0;
}