#include <iostream>
#include <vector>
#include <functional>

using namespace std;

void appliquerFiltre(vector<int>& vec, function<void(int&)> filtre) {
    for (int& e : vec) {
        filtre(e);
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
        case 1: {
            auto afficherPositif = [](int& x) {
                if (x >= 0) cout << x << "\t";
            };
            appliquerFiltre(tab, afficherPositif);
            break;
        }
        case 2: {
            auto afficherNegatif = [](int& x) {
                if (x < 0) cout << x << "\t";
            };
            appliquerFiltre(tab, afficherNegatif);
            break;
        }
        case 3: {
            cout << "Donner seuil : ";
            int seuil;
            cin >> seuil;
            auto superieurA = [seuil](int& x) {
                if (x >= seuil) cout << x << "\t";
            };
            appliquerFiltre(tab, superieurA);
            break;
        }
        default:
            cout << "Choix invalide !\n";
            break;
    }

    return 0;
}
