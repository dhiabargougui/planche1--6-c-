#include "Robot.h"
#include <iostream>
using namespace std;

Robot::Robot(string nom, int x, int y, int radarPortee)
    : nom(nom), x(x), y(y), radarPortee(radarPortee), estMort(false) {}

void Robot::deplacer(int pasX, int pasY) {
    x += pasX;
    y += pasY;
}

void Robot::afficher() const {
    cout << "Nom: " << nom
         << ", Position: (" << x << ", " << y << ")"
         << ", Portee: " << radarPortee
         << ", Statut: " << (estMort ? "Mort" : "En vie") << endl;
}

string Robot::getNom() const { return nom; }
int Robot::getX() const { return x; }
int Robot::getY() const { return y; }
