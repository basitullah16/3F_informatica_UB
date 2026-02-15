#include <iostream>
using namespace std;

int main() {
    int X, Y;
    int risultato = 1;

    cout << "Inserisci X e Y: ";
    cin >> X >> Y;

    for (int i = 0; i < Y; i++) {
        risultato = risultato * X;
    }

    cout << "Risultato: " << risultato;

    return 0;
}