#include <iostream>
using namespace std;
tuple<int, int> min_max(int tab[],int size){
    int min = tab[0];
    int max = tab[0];
    for (int i=0;i<size;i++){
        if (tab[i]<min){
            min = tab[i];
        }
        if (tab[i]>max){
            max = tab[i] ;
        }
    }
    return make_tuple(min,max);}
    int main (){
        int size;
        cout << "entrer le size de tableaux :  " << endl;
        cin >> size;
        int tab[size];
        cout << "entrer les elements de tableaux : " << endl;
        for (int i=0;i<size;i++) {
            cin >> tab[i];
        }
        tuple<int,int> resultat = min_max(tab,size);
        cout << "min : " << get<0>(resultat) << endl;
        cout << "max : " << get<1>(resultat) << endl;
        return 0;
    }
