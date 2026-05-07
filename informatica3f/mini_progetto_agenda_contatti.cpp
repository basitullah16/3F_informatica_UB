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

    // 1. Popolamento automatico (i primi 10)
    for (int i = 0; i < 10; i++) {
        rubrica[i].nome = "Contatto" + to_string(i+1);
        rubrica[i].telefono = "333-000" + to_string(i+1);
        quanti++; 
    }

    // 2. Altri 10 contatti con nomi reali
    string nomiExtra[] = {"Luca", "Sara", "Marco", "Anna", "Paolo", "Giulia", "Enzo", "Elena", "Fabio", "Marta"};
    for (int i = 0; i < 10; i++) {
        rubrica[quanti].nome = nomiExtra[i];
        rubrica[quanti].telefono = "340-111" + to_string(i);
        quanti++; 
    }

    // 3. Append di MR SIGMA
    if (quanti < 100) { 
        rubrica[quanti].nome = "MR SIGMA";
        rubrica[quanti].telefono = "345-6789";
        quanti++; 
    }

    // --- PARTE CON CIN PER LA RICERCA ---
    string cerca;
    cout << "Inserisci il nome da cercare in rubrica: ";
    getline(cin, cerca); // Legge il nome digitato da te

    bool trovato = false;
    for (int i = 0; i < quanti; i++) { 
        if (rubrica[i].nome == cerca) {
            cout << "RISULTATO -> Nome: " << rubrica[i].nome << " | Tel: " << rubrica[i].telefono << endl;
            trovato = true;
            break; // Ottimizzazione: ferma il ciclo se trovato
        }
    }

    if (!trovato) {
        cout << "ERRORE: Il contatto '" << cerca << "' non esiste in RAM." << endl;
    }

    return 0;
}