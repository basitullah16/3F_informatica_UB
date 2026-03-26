#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    float x, max, min, somma = 0;

    cin >> x;
    max = min = x;
    somma += x;

    for(int i = 1; i < n; i++) {
        cin >> x;
        somma += x;

        if(x > max) max = x;
        if(x < min) min = x;
    }

    float media = somma / n;
    float errore_ass = (max - min) / 2;
    float errore_rel = errore_ass / media;
    float errore_perc = errore_rel * 100;

    cout << "Errore assoluto: " << errore_ass ;
    cout << "Errore relativo: " << errore_rel ;
    cout << "Errore percentuale: " << errore_perc ;

    return 0;
}