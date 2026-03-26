#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int tessera;
    float spesa;

    float totale = 0;

    float min_spesa;
    int tessera_min;

    for(int i = 0; i < N; i++) {
        cin >> tessera >> spesa;

        totale += spesa;

        if(i == 0 || spesa < min_spesa) {
            min_spesa = spesa;
            tessera_min = tessera;
        }
    }

    cout << "Incasso totale: " << totale << endl;
    cout << "Tessera con spesa minore: " << tessera_min;

    return 0;
}