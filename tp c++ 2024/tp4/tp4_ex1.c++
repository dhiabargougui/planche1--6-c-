#include <iostream>
using namespace std;

template <typename T>
void echanger(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void trier(T tableau[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < taille; j++) {
            if (tableau[j] < tableau[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            echanger(tableau[i], tableau[minIndex]);
        }
    }
}

template <typename T>
void afficher(const T tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;
}

int main() {
    int tableauint[10] = {5, 8, 4, 7, 9, 2, 4, 5, 0, 1};
    cout << "Tableau avant tri : ";
    afficher(tableauint, 10);

    trier(tableauint, 10);

    cout << "Tableau après tri : ";
    afficher(tableauint, 10);

    double tableaureel[10] = {4.3,2.4,2.6,5.5,8.6,22.4,62.3,4.6,51.3,2.1};
    cout << "Tableau de doubles avant tri : ";
    afficher(tableaureel, 10);

    trier(tableaureel, 10);

    cout << "Tableau de doubles après tri : ";
    afficher(tableaureel, 10);

    return 0;
}
