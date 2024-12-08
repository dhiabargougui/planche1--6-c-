#include <iostream>
#include <cmath>
using namespace std;

class complexe {
private:
    double re;
    double img;

public:
    complexe(double re = 0, double img = 0) : re(re), img(img) {}

    void afficher() const {
        cout << re << "+" << img << "i" << endl;
    }

    double modulee() const {
        return sqrt(pow(re, 2) + pow(img, 2));
    }

    complexe conjugue() const {
        return complexe(re, -img);
    }

    friend complexe add(complexe& c, complexe& a);
    friend complexe add(double c, complexe& a);
    friend complexe sous(complexe& c, complexe& a);
    friend complexe sous(double c, complexe& a);
    friend complexe mul(complexe& c, complexe& a);
    friend complexe mul(double c, complexe& a);
};

// Fonction amie : Addition de deux complexes
complexe add(complexe& c, complexe& a) {
    return complexe(c.re + a.re, c.img + a.img);
}

// Fonction amie : Addition d'un réel et d'un complexe
complexe add(double c, complexe& a) {
    return complexe(c + a.re, a.img);
}

// Fonction amie : Soustraction de deux complexes
complexe sous(complexe& c, complexe& a) {
    return complexe(c.re - a.re, c.img - a.img);
}

// Fonction amie : Soustraction d'un reel et d'un complexe
complexe sous(double c, complexe& a) {
    return complexe(c - a.re, -a.img);
}

// Fonction amie : Multiplication de deux complexes
complexe mul(complexe& c, complexe& a) {
    return complexe(c.re * a.re - c.img * a.img, c.re * a.img + c.img * a.re);
}

// Fonction amie : Multiplication d'un reel et d'un complexe
complexe mul(double c, complexe& a) {
    return complexe(c * a.re, c * a.img);
}

int main() {
    // Creation de deux nombres complexes
    complexe c1(3, 4);  
    complexe c2(1, -2);  

    // Affichage des nombres complexes
    cout << "Complexe 1 : ";
    c1.afficher();
    cout << "Complexe 2 : ";
    c2.afficher();

    // Calcul et affichage du module
    cout << "Module de c1 : " << c1.modulee() << endl;
    cout << "Module de c2 : " << c2.modulee() << endl;

    // Calcul et affichage des conjugues
    complexe conj1 = c1.conjugue();
    complexe conj2 = c2.conjugue();
    cout << "Conjugue de c1 : ";
    conj1.afficher();
    cout << "Conjugue de c2 : ";
    conj2.afficher();

    // Addition de deux complexes
    complexe somme = add(c1, c2);
    cout << "Somme de c1 et c2 : ";
    somme.afficher();

    // Addition d'un complexe et d'un reel
    complexe sommeReel = add(5.0, c1);
    cout << "Somme de c1 et 5 : ";
    sommeReel.afficher();

    // Soustraction de deux complexes
    complexe difference = sous(c1, c2);
    cout << "Difference de c1 et c2 : ";
    difference.afficher();

    // Soustraction d'un reel et d'un complexe
    complexe differenceReel = sous(5.0, c1);
    cout << "Difference de 5 et c1 : ";
    differenceReel.afficher();

    // Multiplication de deux complexes
    complexe produit = mul(c1, c2);
    cout << "Produit de c1 et c2 : ";
    produit.afficher();

    // Multiplication d'un complexe et d'un reel
    complexe produitReel = mul(2.0, c1);
    cout << "Produit de c1 et 2 : ";
    produitReel.afficher();

    return 0;
}
