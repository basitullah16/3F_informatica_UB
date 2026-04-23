#include <iostream>
#include <string>

using namespace std;

struct Contatto {
    string nome;
    string telefono;
};

int main() {
    Contatto rubrica[100]; 
    int quanti = 0;       

    
    
    string nomiIniziali[] = {"Luca", "Sara", "Marco", "Anna", "Paolo", "Giulia", "Enzo", "Elena", "Fabio", "Marta", "MR SIGMA"};
    
    for (string n : nomiIniziali) {
        if (quanti < 100) {
            int i = quanti - 1;
            
            
            while (i >= 0 && rubrica[i].nome > n) {
                rubrica[i + 1] = rubrica[i];
                i--;
            }
            
            
            rubrica[i + 1].nome = n;
            rubrica[i + 1].telefono = "340-" + to_string(100 + quanti);
            quanti++;
        }
    }

    
    string cerca;
    cout << "--- RICERCA BINARIA IN RAM ---" << endl;
    cout << "Inserisci il nome da cercare: ";
    getline(cin, cerca);

    int inizio = 0;
    int fine = quanti - 1;
    int pos = -1;

    while (inizio <= fine) {
        int medio = inizio + (fine - inizio) / 2;

        if (rubrica[medio].nome == cerca) {
            pos = medio;
            break; 
        }
        
        if (rubrica[medio].nome < cerca) {
            inizio = medio + 1;
        } else {
            fine = medio - 1;   
        }
    }

    
    if (pos != -1) {
        cout << "RISULTATO -> Trovato in posizione " << pos << endl;
        cout << "Nome: " << rubrica[pos].nome << " | Tel: " << rubrica[pos].telefono << endl;
    } else {
        cout << "ERRORE: '" << cerca << "' non presente nel vettore ordinato." << endl;
    }

    return 0;
}
