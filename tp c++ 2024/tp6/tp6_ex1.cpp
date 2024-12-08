#include <iostream>
using namespace std;

class vecteur {
private:
    double x, y;
public:
    vecteur(double x, double y) : x(x), y(y) {}

    virtual void afficher() const {
        cout << "(" << x << " , " << y << ")";
    }

    void deplacer(double dx, double dy) {
        x += dx;
        y += dy;
    }

    double getx() const { return x; }
    double gety() const { return y; }
    void setx(double x2) { x = x2; }
    void sety(double y2) { y = y2; }
};

class vecteur3d : public vecteur {
private:
    double z;

public:
    vecteur3d(double x, double y, double z) : vecteur(x, y), z(z) {}

    void afficher() const override {
        // Accessing x and y through the getter methods
        cout << "(" << getx() << " , " << gety() << " , " << z << ")";
    }

    double getz() const { return z; }
    void setz(double z2) { z = z2; }
};

int main() {
    vecteur v1(2.5, 3.5);
    cout << "Vecteur 2D initial : ";
    v1.afficher();
    cout << endl;

    v1.deplacer(1.0, 2.0);
    cout << "Vecteur 2D apres deplacement : ";
    v1.afficher();
    cout << endl;

    vecteur3d* v2 = new vecteur3d(1.0, 2.0, 3.0);
    cout << "Vecteur 3D cree dynamiquement : ";
    v2->afficher();
    cout << endl;

    v2->deplacer(2.0, 1.5);
    v2->setz(v2->getz() + 2.0);
    cout << "Vecteur 3D apres deplacement : ";
    v2->afficher();
    cout << endl;

    delete v2;

    return 0;
}
