#include <iostream>
#include <cstdlib>  // Pour rand() et srand()
#include <ctime>    // Pour time()

using namespace std;

// Fonction pour dessiner le cône du sapin
void drawCone(int height, int numBalls) {
    int ballsPlaced = 0; // Compteur pour les boules
    for (int i = 0; i < height; ++i) {
        // Espaces pour centrer le cône
        for (int j = height - i - 1; j > 0; --j) {
            cout << " ";
        }

        // Dessiner la ligne du cône
        for (int j = 0; j < (2 * i + 1); ++j) {
            // Générer un nombre aléatoire pour décider d'afficher une boule ou une étoile
            if (rand() % 2 == 0 && ballsPlaced < numBalls) {
                cout << "O"; // Afficher une boule
                ballsPlaced++; // Incrémenter le compteur de boules
            } else {
                cout << "*"; // Afficher une étoile
            }
        }
        cout << endl; // Passer à la ligne suivante
    }
}


int main() {
    srand(time(0)); // Initialiser le générateur de nombres aléatoires

    int height, trunkHeight, trunkWidth, numBalls;

    // Demander les paramètres à l'utilisateur
    cout << "Entrer la hauteur du cône: ";
    cin >> height;
    cout << "Entrer la hauteur du tronc: ";
    cin >> trunkHeight;
    cout << "Entrer la largeur du tronc: ";
    cin >> trunkWidth;
    cout << "Entrer le nombre de boules: ";
    cin >> numBalls;

    // Dessiner le sapin
    drawCone(height, numBalls);
  
    return 0;
}
