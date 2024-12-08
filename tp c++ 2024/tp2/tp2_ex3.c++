#include <iostream>
using namespace std;
void incrementer_ref (int &a ){
    a = a + 1;
    return;
}
void permuter_ref (int &a, int &b){
    int c;
    c = a;
    a=b;
    b=c;
}
void incrementer (int *a){
    *a = *a+1;
}
void permuter (int *a , int *b){
    int c= *a;
    *a = *b;
    *b = c;}
int main (){
int a = 1;
int b = 2;
  incrementer_ref(b);
    cout << "After incrementer_ref(b): a = " << a << ", b = " << b << endl;
    incrementer(&a);
    cout << "After incrementer(a): a = " << a << ", b = " << b << endl;
    permuter(&a, &b);
    cout << "After permuter(a, b): a = " << a << ", b = " << b << endl;
    permuter_ref(a, b);
    cout << "After permuter_ref(a, b): a = " << a << ", b = " << b << endl;
}