#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int iscritti, votanti, nulle, bianche;

    int tot_iscritti = 0;
    int tot_votanti = 0;
    int tot_nulle = 0;
    int tot_bianche = 0;

    for(int i = 0; i < n; i++) {
        cin >> iscritti >> votanti >> nulle >> bianche;

        tot_iscritti += iscritti;
        tot_votanti += votanti;
        tot_nulle += nulle;
        tot_bianche += bianche;
    }

    float perc_votanti = (float)tot_votanti / tot_iscritti * 100;
    float perc_nulle = (float)tot_nulle / tot_votanti * 100;
    float perc_bianche = (float)tot_bianche / tot_votanti * 100;

    cout << "Votanti %: " << perc_votanti << endl;
    cout << "Schede nulle %: " << perc_nulle << endl;
    cout << "Schede bianche %: " << perc_bianche << endl;

    return 0;
}