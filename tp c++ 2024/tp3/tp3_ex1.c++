#include <iostream>
using namespace std;
void remplissage(int tab[] , int n){
    for (int i = 0; i <n;i++){
        cout << " entrer le nombre numero : " << i+1  << endl;
        cin >> tab[i]; 
    }
}
int main(){
    int n;
    cout << " donner la taille du tableau : " << endl;
    cin >> n;
    int* tab = new int[n];
    remplissage(tab,n);
    cout << " les nombres positifs sont : " << endl;
    for (int i = 0; i < n; i++) {
        if (tab[i]>0){
            cout << tab[i]<<endl;
        }
}
delete[] tab;
return 0;
}
template <classe t,classe u>
t getmin ( t a , u b){
    return (a<b?a:b);
}