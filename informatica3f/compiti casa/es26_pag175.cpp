#include <iostream>
using namespace std;

int main() {
    int N;
    int somma = 0;
    int dispari = 1;

    cout << "Inserisci N: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        somma += dispari;
        dispari += 2;
    }

    cout << "Quadrato di " << N << " = " << somma;

    return 0;
}