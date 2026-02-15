#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Inserisci numero regioni: ";
    cin >> N;

    while (N <= 0) {
        cout << "Deve essere maggiore di zero. Reinserisci: ";
        cin >> N;
    }

    string nomeRegione;
    int M;
    int abitantiProvincia;
    int totaleGenerale = 0;

    for (int i = 0; i < N; i++) {

        cout << "Nome regione: ";
        cin >> nomeRegione;

        cout << "Numero province: ";
        cin >> M;

        while (M <= 0) {
            cout << "Deve essere maggiore di zero. Reinserisci: ";
            cin >> M;
        }

        int totaleRegione = 0;

        for (int j = 0; j < M; j++) {
            cout << "Abitanti provincia: ";
            cin >> abitantiProvincia;
            totaleRegione += abitantiProvincia;
        }

        cout << "Totale abitanti regione " << nomeRegione << ": "
             << totaleRegione << endl;

        totaleGenerale += totaleRegione;
    }

    cout << "Totale abitanti complessivo: "
         << totaleGenerale << endl;

    return 0;
}