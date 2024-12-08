#include <iostream>
using namespace std;
void testegalVAL(int a,int b){
    if (a==b){
        cout << "a = b"<<endl;
    }else {
        cout<< " a et b sont different "<<endl;
    }
}
void testegaladresse (int *a, int *b){
    if (*a == *b){
        cout << " a = b "<<endl;
    }else {
        cout << " a et b sont different "<<endl;
    }
}
void testegalreferance (int &a , int &b){
    if (a == b){
        cout << " a == b "<<endl;
        } else {
        cout << " a et b sont different "<<endl;
    }
}
int main (){
    int a,b;
    cout << " donner deux entier : "<<endl;
    cin >> a >> b;
    cout << "avec des variables : " << endl;
    testegalVAL(a,b);
    cout << "avec des pointeurs : " << endl;
    testegaladresse(&a,&b);
    cout << "avec des références : " << endl;
    testegalreferance(a,b);
}