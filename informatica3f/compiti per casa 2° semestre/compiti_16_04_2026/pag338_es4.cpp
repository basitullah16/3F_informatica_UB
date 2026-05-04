#include <iostream>
using namespace std;


int main() {
    int N;

    cout << "Inserisci l'ordine della matrice quadrata: ";
    cin >> N;

    int m[100][100];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                m[i][j] = 1;
            } else {
                m[i][j] = 0;
            }
        }
    }

    // Stampa matrice
    cout << "Matrice:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}