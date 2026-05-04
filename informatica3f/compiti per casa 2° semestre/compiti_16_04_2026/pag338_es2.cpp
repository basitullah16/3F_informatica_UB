#include <iostream>
using namespace std;


int main() {
    int N;

    cout << "Inserisci l'ordine della matrice: ";
    cin >> N;

    int m[100][100];

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            m[i][j] = (i + 1) * (j + 1);
        }
    }

    // Stampa matrice
    cout << "Tavola pitagorica:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}