#include<iostream>
#include<cmath>
using std::cout;
using std::endl;
using std::cin;
double f (double x,bool ok) {
    double result;
         if (ok == true){
          result= sqrt((x-1)*(2-x));
          return result;}
    else { cout <<"Résultat : Non réalisable"<<endl;
    }
     }
int main(){
    bool ok;
    double x,result;
    cout << "Saisir un nombre : ";
    cin >> x;
    result = (x-1)*(2-x);
    if (result < 0) {
        ok = false; } 
    else {ok = true;}
    result= f(x,ok);
        cout <<"le resultat est : "<<result<<endl;
    return 0;
}