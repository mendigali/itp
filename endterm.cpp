#include <iostream>
using namespace std;
/* int f(int a, int b = 3, int c = 3)
{
   cout<< ++a * ++b * --c ; 
   return 0;
} */
/* void f(int i) { 
    i++; 
}  */
/* int f(int i) {
    ++i;
    return i; 
}  */
/* void f() { 
} */
/* typedef int (*operation)(int, int);
int add(int x, int y, int (*funPtr)(int, int)); */
int main() {
    /* char c1 = 'a';
    char c2 = c1;
    char *c3 = &c2;
    char *c4, *c5;
    c4=c3;
    c5 = &c1;
    c2 ='z';
    c3 =c5;
    cout << *c3; */

    /* int X = 1;
    X = X * X + 2;
    X = X / X * 2;
    X = X + 2 + X;
    cout << X; */

    /* int a = -1, b = 1;
    float i = 2.0, j = -2.0;
    cout<< (a > b) + (b > a) + (i > j) + (j > i) + ('z' > 'a'); */

    /* double arr[] = {1.2, 2.3, 3.4};

    double *pa;
    pa = arr;

    *pa = 5.5;
    *(pa + 1) = *(pa + 2);
    cout << arr[0] <<" "<< arr[1] <<" "<< arr[2] << endl; */

    /* int i, s = 0, t[] = {0, 1, 2, 4, 8, 16};
    for(i = 2; t[i] < 8; i *= 2) 
        s += t[i];
    cout<<s; */

    /* f(5, 0, 0); */

    /* int i = 1, j = i + 2 * i;
    switch(j) {
        default: j = 0;
        case  1: j++; break;
        case  2: j--;
        case  0: j++; break;
    }
    cout<<++j;  */

    /* int x = 5; int *ptr = &x;
    cout << ptr << " " << *&ptr << " " << &*ptr; */

    /* int p;
    bool a = true;
    bool b = false;
    int x = 10;
    int y = 5;
    p = ((x + y) + (a + b));
    cout << p; */

    /* int i = 1, j = 0, k;
    k = (i && j) + (i || j) + !(i && j) + !i + j;
    cout<< k;  */

    /* int i = 1; 
    f(i); 
    cout << i;  */

    /* int t[4] = { 0, -1, -2, -3 }, *p = t + 3;
    cout<<p[*p] - t[2]; */

    /* int i = 1; 
    i = f(i); 
    cout<<i;  */

    /* int i; 
    i = f(); 
    cout<<i; */

    // char *suit[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    // cout << *suit[3];
    // cout << *(suit+2);

    return 0;
}