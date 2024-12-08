#include <iostream>
#include <cmath>
using namespace std;

class point {
private:
    double x, y;
public:
    point(double x, double y) : x(x), y(y) {}
    double getx() const { return x; }
    double gety() const { return y; }

    void setx(double x2) { x = x2; }
    void sety(double y2) { y = y2; }

    void translate(double x2, double y2) {
        x += x2;
        y += y2;
    }

    double distance(const point& p) const {
        return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
    }
};

class cercle {
private:
    point c;
    double r;
public:
    cercle(double r, const point& c) : r(r), c(c) {}
    cercle(double r, double x, double y) : r(r), c(x, y) {}

    double getrayon() const { return r; }
    void setrayon(double r2) { r = r2; }
    point getcenter() const { return c; }

    void translate(double x2, double y2) {
        c.translate(x2, y2);
    }

    double surface() const {
        return M_PI * r * r;
    }

    double perimetre() const {
        return 2 * M_PI * r;
    }

    bool equals(const cercle& other) const {
        return (r == other.r && c.distance(other.c) == 0);
    }

    bool appartient(const point& p) const {
        return c.distance(p) <= r;
    }

    void afficher() const {
        cout << "Cercle: Rayon = " << r << ", Centre = (" << c.getx() << ", " << c.gety() << ")\n";
    }
};

int main() {

    cercle circ1(1, 10, 10);
    cout << "Caracteristiques du cercle initial :\n";
    circ1.afficher();

    cout << "Perimetre : " << circ1.perimetre() << "\n";
    cout << "Surface : " << circ1.surface() << "\n";

    circ1.setrayon(circ1.getrayon() * 2);
    cout << "\nApres doublement du rayon :\n";
    circ1.afficher();
    cout << "Perimetre : " << circ1.perimetre() << "\n";
    cout << "Surface : " << circ1.surface() << "\n";

    circ1.translate(-circ1.getcenter().getx(), -circ1.getcenter().gety());
    cout << "\nApres deplacement du centre a l'origine :\n";
    circ1.afficher();

    point p1(1, 1);
    point p2(3, 3);
    cout << "\nPoint (1,1) est " << (circ1.appartient(p1) ? "a l'interieur" : "a l'exterieur") << " du cercle.\n";
    cout << "Point (3,3) est " << (circ1.appartient(p2) ? "a l'interieur" : "a l'exterieur") << " du cercle.\n";

    cercle circ2(2, 0, 0);
    cout << "\nLe cercle est " << (circ1.equals(circ2) ? "egal" : "different") << " au cercle de rayon 2 et centre (0,0).\n";

    return 0;
}
