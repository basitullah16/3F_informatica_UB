#include <iostream>
using namespace std;

int main() {
    int N;  // numero giorni del mese
    cout << "Quanti giorni vuoi inserire? ";
    cin >> N;

    int giornoNumero;
    string giornoSettimana;
    int copie;

    int maxCopie = 0;
    int giornoMax = 0;

    int sommaTotale = 0;
    int sommaDomenica = 0;
    int contDomenica = 0;

    for (int i = 0; i < N; i++) {

        cout << "Numero giorno: ";
        cin >> giornoNumero;

        cout << "Giorno settimana: ";
        cin >> giornoSettimana;

        cout << "Copie vendute: ";
        cin >> copie;

        sommaTotale += copie;

        if (copie > maxCopie) {
            maxCopie = copie;
            giornoMax = giornoNumero;
        }

        if (giornoSettimana == "domenica") {
            sommaDomenica += copie;
            contDomenica++;
        }
    }

    cout << "Giorno con vendita massima: " << giornoMax << endl;
    cout << "Media giornaliera: " << (double)sommaTotale / N << endl;

    if (contDomenica > 0)
        cout << "Media domenicale: " << (double)sommaDomenica / contDomenica << endl;
    else
        cout << "Nessuna domenica inserita." << endl;

    return 0;
}