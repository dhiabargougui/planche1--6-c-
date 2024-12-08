#ifndef ROBOTCHASSEUR_H
#define ROBOTCHASSEUR_H

#include "Robot.h"
#include <vector>
#include <cmath>
using namespace std;

class RobotChasseur : public Robot {
public:
    RobotChasseur(string nom, int x, int y, int radarPortee);
    bool estALaPortee(const Robot& autre) const;
    void tuer(Robot& autre);
    void rechercherEtTuer(vector<Robot>& robots);
};

#endif
