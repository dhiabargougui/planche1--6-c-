#include <iostream>
using namespace std;
int main(){
    int a;
    int *p = &a ;
    cout <<"donner un entier" << endl;
    cin >>a;
    cout <<"valeur : "<< a <<endl;
    cout <<" adresse :"<< p <<endl;
    float b;
    float *q = &b;
    cout <<"donner un reel : "<< endl;
    cin >> b;
    cout << " valeur :" <<b << endl;
    cout << " adresse : "<<q <<endl;
}