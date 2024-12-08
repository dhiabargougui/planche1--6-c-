#include <iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
using std::cin;
int main(){
    string tab [5];
    int max_length;
    for (int i = 0; i < 5;i++){
        cout << "Entre le mot numero  " << i+1 << ": ";
        cin >> tab[i];  
    }
    max_length = tab[0].length();
    string mot_plus_long=tab[0];
    for (int i=1;i<5;i++){
    if(max_length < tab[i].length()){
     max_length=tab[i].length();
     mot_plus_long=tab[i];
    }
    }
    cout <<"le mot le plus long est : "<< mot_plus_long << endl;
return 0;
}