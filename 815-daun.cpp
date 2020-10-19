#include <iostream>
#include <sstream>
using namespace std;

int sum1[37], sum2[37], sum3[37];

void start(){
  for(int i = 0; i <= 36; ++i){
    sum1[i] = 0;
    sum2[i] = 0;
    sum3[i] = 0;
  }
}

int specialCase(string s1, string s2){
  int i, n;
  for(int j = 0; j < 4; ++j){
    if(s1[j] != s2[j]){
      return -1;
    }
  }
  string temp = "";
  for(int j = 4; j < 8; ++j) temp += s1[j];
  stringstream todec1(temp);
  todec1 >> i;

  temp = "";
  for(int j = 4; j < 8; ++j) temp += s2[j];
  stringstream todec2(temp);
  todec2 >> n;

  for(; i <= n; ++i){
    int p1, p2, p3, p4;
    p1 = i / 1000;
    p2 = i % 1000 / 100;
    p3 = i % 100 / 10;
    p4 = i % 10;
    int pos = p1 + p2 + p3 + p4;
    sum3[pos]++;
  }

  int fhalf;
  temp = "";
  for(int j = 0; j < 4; ++j) temp += s1[j];
  stringstream todec3(temp);
  todec3 >> fhalf;
  int p1, p2, p3, p4;
  p1 = fhalf / 1000;
  p2 = fhalf % 1000 / 100;
  p3 = fhalf % 100 / 10;
  p4 = fhalf % 10;
  int pos = p1 + p2 + p3 + p4;
  return sum3[pos];
}

void sumOfPart(string s1, string s2, bool t){
  int i, n;
  if(t){
    string temp = "";
    for(int i = 0; i < 4; ++i) temp += s1[i];
    stringstream todec1(temp);
    todec1 >> i;
    i++;

    temp = "";
    for(int i = 0; i < 4; ++i) temp += s2[i];
    stringstream todec2(temp);
    todec2 >> n;
   }else{
     i = 1;
     n = 10000;
  }
  for(; i < n; ++i){
    int p1, p2, p3, p4;
    p1 = i / 1000;
    p2 = i % 1000 / 100;
    p3 = i % 100 / 10;
    p4 = i % 10;
    int pos = p1 + p2 + p3 + p4;
    if(t){
      sum1[pos]++;
    }else{
      sum2[pos]++;
    }
  }
}

int preCase(string s1, string s2){
  int res = 0, edge1 = 0, edge2 = 0, fpos, spos, p1, p2, p3, p4;

  string temp = "";
  for(int i = 0; i < 4; ++i) temp += s1[i];
  stringstream todec1(temp);
  todec1 >> edge1;
  p1 = edge1 / 1000;
  p2 = edge1 % 1000 / 100;
  p3 = edge1 % 100 / 10;
  p4 = edge1 % 10;
  fpos = p1 + p2 + p3 + p4;

  temp = "";
  for(int i = 0; i < 4; ++i) temp += s2[i];
  stringstream todec2(temp);
  todec2 >> edge2;
  p1 = edge2 / 1000;
  p2 = edge2 % 1000 / 100;
  p3 = edge2 % 100 / 10;
  p4 = edge2 % 10;
  spos = p1 + p2 + p3 + p4;

  for(int i = edge1; i <= 9999; ++i){
    p1 = i / 1000;
    p2 = i % 1000 / 100;
    p3 = i % 100 / 10;
    p4 = i % 10;
    int check = p1 + p2 + p3 + p4;
    if(check == fpos){
      res++;
    }
  }
  for(int i = 1; i <= edge2; ++i){
    p1 = i / 1000;
    p2 = i % 1000 / 100;
    p3 = i % 100 / 10;
    p4 = i % 10;
    int check = p1 + p2 + p3 + p4;
    if(check == spos){
      res++;
    }
  }
  return res;
}

int happyNumberAmount(string s1, string s2){
  start();
  int special = specialCase(s1, s2);
  if(special > -1){
    return special;
  }
  int ans = preCase(s1, s2);
  sumOfPart(s1, s2, true);
  sumOfPart(s1, s2, false);
  for(int i = 1; i <= 36; ++i){
    if(sum1[i] > 0 && sum2[i] > 0){
      ans += sum1[i] * sum2[i];
    }
  }
  return ans;
}

void solution(){
  string s1, s2;
  cin >> s1 >> s2;
  cout << happyNumberAmount(s1, s2);
}

int main(){
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
  int test = 1;
  while(test--){
    solution();
    // cout << endl;
  }
  return 0;
}