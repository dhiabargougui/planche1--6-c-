#include <iostream>
#include <array>
#include <string>
using namespace std;
void remplissage (int tab[],int n){
    for (int i=0; i<n; i++){
        cout << " entrer le nombre numero  "<<i+1<< ";"<<endl;
        cin >> tab[i];
    }
}
string recherche (int tab[],int n,int v){
    int i=0;
    do {
    if (v==tab[i]){
        return "V se trouve dans le tableau à la position :"+ to_string (i+1);
    }
    i++;}
    while (i<n);
    if (i==n){
        return ("V n'est pas dans le tableau.");
    }
    
}
int main (){
    int v,n;
    cout << " donner le taille de tableau : " <<endl;
    cin >> n;
     int *tab=new int[n];
     remplissage(tab,n);
    cout << " donner le nombre a rechercher : " <<endl;
    cin >> v;
    cout << recherche(tab,n,v);
    delete[] tab;
    return 0;
}
