#include <iostream>
using namespace std;
#include <string>
struct produit {
    string type;
    double prixht;
    bool solde;
};
double calculerprix(const produit& produit){
    double prixttc;
    double tax;
    if(produit.type=="luxe"){
        tax=produit.prixht*0.25;
    }else {
        tax=produit.prixht*0.19;
    }
    prixttc=produit.prixht+tax;
    if(produit.solde==true){
        prixttc-=prixttc*0.2;
    }
    return prixttc;
}
int main(){
    produit p;
    cout<<"entrer le type de produit : "<<endl;
    cin>>p.type;
    cout<<"entrer le prix hors taxe : "<<endl;
    cin>>p.prixht;
    cout<<"entrer si le produit est en solde (true/false) : "<<endl;
    cin>>p.solde;
    double prixttc=calculerprix(p);
    cout<<"le prix TTC est : "<<prixttc<<endl;
    return 0;
}