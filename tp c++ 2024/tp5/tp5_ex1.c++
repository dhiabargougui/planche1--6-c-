#include <iostream>
#include <string>
using namespace std;

class Etudiant {
private:
    static int compteur;
    int matricule;
    string nom;
    int nbrNotes;
    float* tabNotes;

public:
    Etudiant() : matricule(compteur++), nom(""), nbrNotes(0), tabNotes(nullptr) {}

    Etudiant(string nom, int nbrNotes) : matricule(compteur++), nom(nom), nbrNotes(nbrNotes) {
        tabNotes = new float[nbrNotes];
    }

    ~Etudiant() {
        delete[] tabNotes;
    }

    Etudiant(const Etudiant& e) : matricule(compteur++), nom(e.nom), nbrNotes(e.nbrNotes) {
        tabNotes = new float[nbrNotes];
        for (int i = 0; i < nbrNotes; ++i) {
            tabNotes[i] = e.tabNotes[i];
        }
    }

    int getMatricule() const { return matricule; }
    void setNom(const string& nom) { this->nom = nom; }
    string getNom() const { return nom; }
    void setNbrNotes(int nbr) { 
        delete[] tabNotes;
        nbrNotes = nbr; 
        tabNotes = new float[nbrNotes]; 
    }
    int getNbrNotes() const { return nbrNotes; }

    void saisie() {
        cout << "Enter grades for " << nom << " (" << nbrNotes << " grades):\n";
        for (int i = 0; i < nbrNotes; ++i) {
            cout << "Grade " << (i + 1) << ": ";
            cin >> tabNotes[i];
        }
    }

    void affichage() const {
        cout << "Matricule: " << matricule << "\n";
        cout << "Name: " << nom << "\n";
        cout << "Number of grades: " << nbrNotes << "\n";
        cout << "Grades: ";
        for (int i = 0; i < nbrNotes; ++i) {
            cout << tabNotes[i] << " ";
        }
        cout << "\n";
    }

    float moyenne() const {
        if (nbrNotes == 0) return 0; 
        float somme = 0;
        for (int i = 0; i < nbrNotes; ++i) {
            somme += tabNotes[i];
        }
        return somme / nbrNotes;
    }

    bool admis() const {
        return moyenne() >= 10;
    }

    static bool comparer(const Etudiant& e1, const Etudiant& e2) {
        return e1.moyenne() == e2.moyenne();
    }
};

int Etudiant::compteur = 1;

int main() {
    Etudiant e1("Dhia", 3);
    e1.saisie();
    e1.affichage();
    cout << "Average of " << e1.getNom() << ": " << e1.moyenne() << endl;
    cout << (e1.admis() ? "Admitted" : "Not admitted") << endl;

    Etudiant e2("Ranim", 4);
    e2.saisie();
    e2.affichage();
    cout << "Average of " << e2.getNom() << ": " << e2.moyenne() << endl;
    cout << (e2.admis() ? "Admitted" : "Not admitted") << endl;

    if (Etudiant::comparer(e1, e2)) {
        cout << "The averages of both students are identical." << endl;
    } else {
        cout << "The averages of both students are different." << endl;
    }

    return 0;
}
