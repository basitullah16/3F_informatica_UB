#include <iostream>
using namespace std;

int main() {
    int num, precedente;
    int cont = 0;
    bool costante = true;
    int differenza;

    cout << "Inserisci numero (999 per terminare): ";
    cin >> precedente;

    if (precedente == 999) {
        cout << "Nessun numero valido inserito.";
        return 0;
    }

    cont++;

    cout << "Inserisci numero (999 per terminare): ";
    cin >> num;

    if (num != 999) {
        differenza = num - precedente;
        cont++;
    }

    while (num != 999) {
        precedente = num;
        cout << "Inserisci numero (999 per terminare): ";
        cin >> num;

        if (num != 999) {
            if (num - precedente != differenza) {
                costante = false;
            }
            cont++;
        }
    }

    if (costante)
        cout << "Differenza costante." << endl;
    else
        cout << "Differenza NON costante." << endl;

    cout << "Numeri inseriti: " << cont << endl;

    return 0;
}