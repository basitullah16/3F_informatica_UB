#include <iostream>
using namespace std;

int main() {
    int a, b, numero;

    do {
        cout << "Inserisci a e b (a < b): ";
        cin >> a >> b;
    } while (a >= b);

    do {
        cout << "Inserisci un numero: ";
        cin >> numero;
    } while (numero >= a && numero <= b);

    cout << "Numero fuori intervallo. Fine." << endl;

    return 0;
}