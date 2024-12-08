#include <iostream>
using std::cout;
using std::endl;
using std::cin;
int main(){
    int nmbr;
    int max=0;
    for (int i=0; i<10; i++){
    cout << "taper 10 entiers : " <<endl;
    cin>>nmbr;
    if (nmbr>max) max=nmbr;    
    }
    cout <<"max : " <<max;
return 0;
}