#include <iostream>
using namespace std;

int main() {
    int a, b;
    int cont = 0;

    while (true) {
        cout << "Inserisci due numeri: ";
        cin >> a >> b;

        cont++;

        if (a == b) {
            cout << "Terminato per numeri uguali." << endl;
            break;
        }

        if (b > a) {
            cout << "Terminato per secondo numero maggiore." << endl;
            break;
        }
    }

    cout << "Coppie inserite: " << cont << endl;

    return 0;
}