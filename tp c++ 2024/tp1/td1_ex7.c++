#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main() {
    int resultat , N;
    cout << "Entrez un entier N : ";
    cin >> N;
    if (N < 0) {
        cout << "Le factoriel d'un nombre négatif n'existe pas." << endl;
    } else {
        resultat = 1;  // Initialisation du résultat à 1
        for (int i = 2; i <= N; ++i) {
           resultat = resultat*i ;  // Multiplie le résultat par i
        }
        cout << "Le factoriel de " << N << " est : " << resultat << endl;
    }
    return 0;
}