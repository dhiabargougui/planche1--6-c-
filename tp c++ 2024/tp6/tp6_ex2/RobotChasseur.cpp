#include "RobotChasseur.h"
#include <iostream>
#include <cmath>
using namespace std;

RobotChasseur::RobotChasseur(string nom, int x, int y, int radarPortee)
    : Robot(nom, x, y, radarPortee) {}

bool RobotChasseur::estALaPortee(const Robot& autre) const {
    if (autre.isMort()) return false;
    int dx = autre.getX() - x;
    int dy = autre.getY() - y;
    return sqrt(dx * dx + dy * dy) <= radarPortee;
}

void RobotChasseur::tuer(Robot& autre) {
    autre.setMort(true);
}

void RobotChasseur::rechercherEtTuer(vector<Robot>& robots) {
    for (Robot& robot : robots) {
        if (!robot.isMort() && estALaPortee(robot)) {
            tuer(robot);
        }
    }
}
