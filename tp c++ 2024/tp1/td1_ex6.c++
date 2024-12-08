#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void swap (int &a,int &b){
    int c;
    c = a;
    a=b;    
    b=c;
}
int main(){
    int a,b;
    cout << " entrer deux entier a et b : "<<endl;
    cin >> a >> b;
    cout <<"avant swappings a : "<< a << " b : "<< b << endl;
    swap (a,b);
    cout <<"apret le swaps a : "<< a << " b : "<< b << endl;
    return 0;
}