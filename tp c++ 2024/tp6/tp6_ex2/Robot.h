#ifndef ROBOT_H
#define ROBOT_H

#include <string>
using namespace std;

class Robot {
protected:
    string nom;
    int x, y;
    int radarPortee;  // Radar range is inherited
    bool estMort;

public:
    Robot(string nom, int x, int y, int radarPortee);
    void setMort(bool mort) { estMort = mort; }
    bool isMort() const { return estMort; }
    void deplacer(int pasX, int pasY);
    virtual void afficher() const;
    string getNom() const;
    int getX() const;
    int getY() const;

    virtual ~Robot() {}
};

#endif
