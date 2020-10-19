#include<iostream>
using namespace std;
const int MAX_N = 200;
int answer[MAX_N];

int numberOfApperance(char arr[MAX_N], char ch){
    int counter = 0;
    for(int i = 0; i</* strlen(arr) */10; i++){
    if(arr[i] == ch) counter++;
    }
    return counter;
}
void solution(){
    int amount;
    char letter[MAX_N];
    string word[MAX_N];
    char ch1;
    char str[MAX_N];
    cin>>amount;
    for(int i = 0; i<amount; i++){
        cin>>ch1>>str;
        letter[i]= ch1;
        word[i] = str;
        answer[i] = numberOfApperance(str,ch1);

    }
    for(int i = 0; i<amount; i++){
        cout<<answer[i]<<" "<<letter[i]<<" in "<<word[i]<<endl;
    }
}
int main(){
  solution();
}