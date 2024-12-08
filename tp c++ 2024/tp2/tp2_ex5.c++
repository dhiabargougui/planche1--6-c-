#include <iostream>
#include <random>
#include <ctime>
using namespace std;
int randint(int x, int y){
    int r;
    r=rand() % (y+ 1 - x) + x;
    return r;
}
float randfloat(float a, float b){
    int r;
    r=((float)rand() / RAND_MAX) * (b- a) + a;
    return r;
}
int main(){
    int x, y;
    float a, b;
    srand(time(0));
    cout<<"donner le minimum int : "<<endl;
    cin >>x;
    cout <<"donner le maximum int : "<<endl;
    cin >>y;
    cout<<"donner le minimum float : "<<endl;
    cin >>a;
    cout <<"donner le maximum float : "<<endl;
    cin >>b;
    cout<<"le nombre int aleat est : " <<randint(x,y)<<endl;
     cout<<"le nombre float aleat est : " <<randfloat(a,b)<<endl;
    return 0;
}