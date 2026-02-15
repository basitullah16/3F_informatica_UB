#include <iostream>
using namespace std;

int main() {
    int N, num;
    int sommaPari = 0, contPari = 0;
    int sommaDispari = 0, contDispari = 0;
    int maxPos = 0, minNeg = 0;
    bool primoPos = true, primoNeg = true;

    cout << "Quanti numeri vuoi inserire? ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Inserisci numero: ";
        cin >> num;

        
        if (num %2 == 0) {
            sommaPari += num;
            contPari++;
        } else {
            sommaDispari += num;
            contDispari++;
        }

    
        if (num > 0) {
            if (primoPos || num > maxPos) {
                maxPos = num;
                primoPos = false;
            }
        }


        if (num < 0) {
            if (primoNeg || num < minNeg) {
                minNeg = num;
                primoNeg = false;
            }
        }
    }

    if (contPari > 0)
        cout << "Media pari: " << (double)sommaPari / contPari << endl;

    if (contDispari > 0)
        cout << "Media dispari: " << (double)sommaDispari / contDispari << endl;

    if (!primoPos)
        cout << "Massimo positivo: " << maxPos << endl;

    if (!primoNeg)
        cout << "Minimo negativo: " << minNeg << endl;

    return 0;
}