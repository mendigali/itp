#include<iostream>
using namespace std;
int numbers[105],zero;
void standartInputArray(int *first , int size){
    for(int i = 0; i<size; i++){
        cin>>*(numbers+i);
    }
}
int firstZero(int *first , int size){
    int startpoint;
    for(int i = 0; i<size; i++){
         if(*(numbers+i)==0){
            startpoint=i;
            return startpoint;
        }
    }
}
int answer(int *first, int b){
    int result = 0;
    for(int i = (*first)+1; i<b; i++){
        if(*(numbers+i)==0) {
            return result;
        }
        else result+=*(numbers+i);
    }
}
int main(){
    int b;
    cin>>b;
    standartInputArray(numbers, b);
    zero = firstZero(numbers,b);
    cout<<answer(&zero, b);
}



 