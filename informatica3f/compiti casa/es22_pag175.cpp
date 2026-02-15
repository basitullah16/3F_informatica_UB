#include <iostream>
using namespace std;

int main() {
    int dividendo, divisore;
    int quoziente = 0;

    cout << "Inserisci dividendo e divisore: ";
    cin >> dividendo >> divisore;

    while (dividendo >= divisore) {
        dividendo = dividendo - divisore;
        quoziente++;
    }

    cout << "Quoziente: " << quoziente << endl;
    cout << "Resto: " << dividendo << endl;

    return 0;
}