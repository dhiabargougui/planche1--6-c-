#include <iostream>
#include <vector>
using namespace std;

void afficherP(int& x, int seuil = 0) {
    if (x >= 0)
        cout << x << "\t";
}

void afficherN(int& x, int seuil = 0) {
    if (x < 0)
        cout << x << "\t";
}

void greaterThan(int& x, int seuil) {
    if (x >= seuil)
        cout << x << "\t";
}

void appliquerFiltre(vector<int>& vec, void(*filtre)(int&, int)) {
    int seuil = 0;
    if (filtre == greaterThan) {
        cout << "Donner seuil : ";
        cin >> seuil;
    }
    for (int& e : vec) {
        filtre(e, seuil);
    }
}

int main() {
    vector<int> tab{ -2, 3, -33, 7, 99, 6, 2, -39 };

    cout << "************************\n";
    cout << "* 1. Afficher positif *\n";
    cout << "* 2. Afficher negatif *\n";
    cout << "* 3. Superieur a *\n";
    cout << "************************\n";
    cout << "Entrez votre choix ?\n";

    int choix;
    cin >> choix;

    switch (choix) {
        case 1:
            appliquerFiltre(tab, afficherP);
            break;
        case 2:
            appliquerFiltre(tab, afficherN);
            break;
        case 3:
            appliquerFiltre(tab, greaterThan);
            break;
        default:
            cout << "Choix invalide !\n";
            break;
    }

    return 0;
}
