#include <iostream>
#include <cmath>
using namespace std;

class Vecteur3D {
private:
    float x, y, z;

public:
    Vecteur3D(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}

    void afficher() const {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    Vecteur3D somme(const Vecteur3D& u) const {
        return Vecteur3D(x + u.x, y + u.y, z + u.z);
    }

    float produitscalaire(const Vecteur3D& u) const {
        return x * u.x + y * u.y + z * u.z;
    }

    bool coincide(const Vecteur3D& u) const {
        return x == u.x && y == u.y && z == u.z;
    }

    float norme() const {
        return std::sqrt(x * x + y * y + z * z);
    }

    static Vecteur3D normax_valeur(const Vecteur3D& v1, const Vecteur3D& v2) {
        return (v1.norme() >= v2.norme()) ? v1 : v2;
    }

    static const Vecteur3D* normax_adresse(const Vecteur3D* v1, const Vecteur3D* v2) {
        return (v1->norme() >= v2->norme()) ? v1 : v2;
    }

    static const Vecteur3D& normax_reference(const Vecteur3D& v1, const Vecteur3D& v2) {
        return (v1.norme() >= v2.norme()) ? v1 : v2;
    }
};

int main() {
    Vecteur3D v1(4, 7, 1);
    Vecteur3D v2(1, 4, 8);

    cout << "Vecteur v1 : ";
    v1.afficher();
    cout << "Vecteur v2 : ";
    v2.afficher();

    Vecteur3D v3 = v1.somme(v2);
    cout << "Somme de v1 et v2 : ";
    v3.afficher();

    cout << "Produit scalaire de v1 et v2 : " << v1.produitscalaire(v2) << "\n";

    cout << "v1 et v2 ont les memes composantes ? "
         << (v1.coincide(v2) ? "Oui" : "Non") << "\n";

    cout << "Norme de v1 : " << v1.norme() << "\n";
    cout << "Norme de v2 : " << v2.norme() << "\n";

    Vecteur3D max_val = Vecteur3D::normax_valeur(v1, v2);
    cout << "Vecteur avec la plus grande norme (valeur) : ";
    max_val.afficher();

    const Vecteur3D* max_addr = Vecteur3D::normax_adresse(&v1, &v2);
    cout << "Vecteur avec la plus grande norme (adresse) : ";
    max_addr->afficher();

    const Vecteur3D& max_ref = Vecteur3D::normax_reference(v1, v2);
    cout << "Vecteur avec la plus grande norme (reference) : ";
    max_ref.afficher();

    return 0;
}
