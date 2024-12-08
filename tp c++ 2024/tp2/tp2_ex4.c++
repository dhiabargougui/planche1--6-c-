#include <iostream>
using namespace std;
int main (){
    cout << "******** CALCULATRICE *****" << endl;
    cout << "1.Addition" << endl;
    cout << "2.Soustraction" << endl;
    cout << "3.Multiplication" << endl;
    cout << "4.Division" << endl;
    cout << "5.Sortir" << endl;
    cout << "**********************************"<< endl;
    int choix,a,b;
    cout << "Choisissez une operation : ";
    cin >> choix;
    cout << " donner les operande : "<< endl;
    cin >> a >> b;
    switch (choix) {
        case 1:
        cout << "resultat :"<< a+b <<endl;
        break;
        case 2:
        cout << "resultat :"<< a-b <<endl;
        break;
        case 3:
        cout << "resultat :"<< a*b <<endl;
        break;
        case 4 :
        if(b!=0){
            cout << "resultat :"<< a/b <<endl;
        }else{
            cout << "Erreur : Division par zero" << endl;
        }
        break;
        case 5:
        cout << "Au revoir!" << endl;
        break;
        default:
        cout << "Erreur : Choix invalide!" << endl;}
}