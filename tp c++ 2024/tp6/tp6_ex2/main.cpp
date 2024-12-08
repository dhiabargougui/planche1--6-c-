#include "Robot.h"
#include "RobotChasseur.h"
#include <vector>
#include <iostream>
using namespace std;

int main() {
    RobotChasseur robotChass1("Optimus", 2, 3, 25);

    robotChass1.deplacer(33, 19);
    robotChass1.afficher();

    vector<Robot> robots = {
        Robot("Megatron", 50, 50, 10),
        Robot("Starscream", 10, 15, 5),
        Robot("Bumblebee", 36, 23, 15),
        Robot("Ratchet", 100, 200, 20),
        Robot("Ironhide", 37, 22, 30)
    };

    cout << "\nLes robots ennemis :" << endl;
    for (const Robot& robot : robots) {
        robot.afficher();
    }

    cout << "\nOptimus commence la chasse :" << endl;
    robotChass1.rechercherEtTuer(robots);

    cout << "\nStatut final des robots ennemis :" << endl;
    for (const Robot& robot : robots) {
        robot.afficher();
    }

    return 0;
}
