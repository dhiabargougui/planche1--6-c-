#include <iostream>
using namespace std;
#include <vector>
int main(){
    int size;
    int produit =0;
    vector<int> u(size);
    vector<int> v(size);
    cout << " entrer le size de vecteur : "<<endl;
    cin >> size;
    cout << " enter les elements de vecteur u : "<<endl;
    for (int i=0 ;i<size;i++){
        cin >> u[i];
    }
    cout << " entrer les elements de vecteur v : "<<endl;
    for (int i=0 ;i<size;i++){
        cin >> v[i];
    }
    for (int i=0;i<size;i++){
        produit=u[i]*v[i]+produit;
    }
    cout << "produit de deux vecteur est : "<<produit<<endl; 
}
