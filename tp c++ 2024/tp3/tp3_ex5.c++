#include <iostream>
#include<vector>
#include <string>
#include<map>
using namespace std;
map<string,tuple<int,int>> ville;
void searsh_city(string rech){
   auto it =ville.find(rech);
   if(it !=ville.end()){
    cout << rech <<" position is : "<<get<0>(it->second)<<" , "<<get<1>(it->second)<< endl;
   } else {
    cout << "Ville non trouvée"<< endl;
   }
}
int main(){
    string rech;
    ville.insert(make_pair("Ariana", make_tuple(36, 10)));
    ville.insert(make_pair("Béja", make_tuple(36, 9)));
    ville.insert(make_pair("Ben Arous", make_tuple(36, 10)));
    ville.insert(make_pair("Bizerte", make_tuple(37, 9)));
    ville.insert(make_pair("Gabès", make_tuple(33, 10)));
    ville.insert(make_pair("Gafsa", make_tuple(34, 8)));
    ville.insert(make_pair("Jendouba", make_tuple(36, 8)));
    ville.insert(make_pair("Kairouan", make_tuple(35, 10)));
    ville.insert(make_pair("Kasserine", make_tuple(35, 8)));
    ville.insert(make_pair("Kebili", make_tuple(33, 8)));
    ville.insert(make_pair("Kef", make_tuple(36, 8)));
    ville.insert(make_pair("Mahdia", make_tuple(35, 11)));
    ville.insert(make_pair("Manouba", make_tuple(36, 10)));
    ville.insert(make_pair("Medenine", make_tuple(33, 10)));
    ville.insert(make_pair("Monastir", make_tuple(35, 10)));
    ville.insert(make_pair("Nabeul", make_tuple(36, 10)));
    ville.insert(make_pair("Sfax", make_tuple(34, 10)));
    ville.insert(make_pair("Sidi Bouzid", make_tuple(35, 9)));
    ville.insert(make_pair("Siliana", make_tuple(36, 9)));
    ville.insert(make_pair("Sousse", make_tuple(35, 10)));
    ville.insert(make_pair("Tataouine", make_tuple(32, 10)));
    ville.insert(make_pair("Tozeur", make_tuple(33, 8)));
    ville.insert(make_pair("Tunis", make_tuple(36, 10)));
    ville.insert(make_pair("Zaghouan", make_tuple(36, 10)));
    cout << "donner nom de ville a rechercher : "<<endl;
    cin >> rech;
    searsh_city(rech);
    return 0;
}