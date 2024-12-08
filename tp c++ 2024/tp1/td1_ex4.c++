#include <iostream>
#include<cmath>
using std::cout;
using std::endl;
using std::cin;
double distance (double xa, double xb , double ya, double yb){
    return sqrt(pow(xb-xa,2)+pow(yb-ya,2)); 
}
int main(){
    float xa,xb,ya,yb;
    float dist;
    cout <<"donner le cordonner de point A : " << endl;
    cin >> xa >> ya;
    cout <<"donner le cordonner de point B : " << endl;
    cin >> xb >> yb;
    dist = distance(xa, xb, ya,yb);
    cout <<"la distance entre les deux points est : " << dist << endl;
    return 0;
}