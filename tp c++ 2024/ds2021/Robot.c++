#include<iostream>
#include <cmath>
#include <string>
using namespace std;

class robot {
private:
    string name;
    float posx;
    float posy;
    float port_radar;
    bool estmort;
public:
    robot(string name, float posx = 0, float posy = 0, float port_radar = 1, bool estmort = false);
    
    void deplacer(float x, float y) {
        posx = x;
        posy = y;
    }
    
    void afficher_info() {
        cout << "nom : " << name << " position : (" << posx << "," << posy << ") "
             << "port_radar : " << port_radar << " estmort : " << estmort << endl;
    }
    
    bool test_radar(robot &robot2) {
        float distance = sqrt(pow(posx - robot2.posx, 2) + pow(posy - robot2.posy, 2));
        return distance <= port_radar;
    }
    
    void est_mort() {
        estmort = true;
        cout << name << " est mort." << endl;
    }
};

// Implementing the constructor
robot::robot(string name, float posx, float posy, float port_radar, bool estmort)
    : name(name), posx(posx), posy(posy), port_radar(port_radar), estmort(estmort) {}

int main() {
    robot robot1("optimus", 2, 3, 25, false);
    robot1.deplacer(35, 22);
    robot1.afficher_info();  // Display updated info after moving

    robot robot2("megatron");
    robot2.deplacer(10, 10);
    robot2.afficher_info();  // Display info for megatron

    if (robot1.test_radar(robot2)) {
        robot2.est_mort();
    }

    return 0;
}
