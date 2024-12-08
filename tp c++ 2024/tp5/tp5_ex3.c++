#include <iostream>
#include <cmath> 
using namespace std;

class point {
private:
    float x;
    float y;

public:
    point(float x, float y) : x(x), y(y) {}

    void afficher() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    friend bool comparer(const point& p1, const point& p2);
    friend float distance(const point& p1, const point& p2);
    friend point milieu(const point& p1, const point& p2);
};

bool comparer(const point& p1, const point& p2) {
    return (p1.x == p2.x && p1.y == p2.y);
}

float distance(const point& p1, const point& p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

point milieu(const point& p1, const point& p2) {
    return point((p1.x + p2.x) / 2, (p1.y + p2.y) / 2);
}

int main() {
    point p1(3, 4), p2(6, 8);

    cout << "Point 1 : ";
    p1.afficher();

    cout << "Point 2 : ";
    p2.afficher();

    if (comparer(p1, p2)) {
        cout << "Les deux points sont identiques." << endl;
    } else {
        cout << "Les deux points sont différents." << endl;
    }

    cout << "Distance entre les deux points : " << distance(p1, p2) << endl;

    point pMilieu = milieu(p1, p2);
    cout << "Point milieu : ";
    pMilieu.afficher();

    return 0;
}
