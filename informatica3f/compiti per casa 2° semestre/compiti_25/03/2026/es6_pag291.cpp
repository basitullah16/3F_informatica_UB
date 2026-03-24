#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string squadre[n];
    char serie[n];
    int punti[n];

    for(int i=0; i<n; i++) {
        cin >> squadre[i];
        cin >> serie[i];
        cin >> punti[i];
    }

    
    cout << "Serie A:\n";
    for(int i=0; i<n; i++) {
        if(serie[i] == 'A') {
            cout << squadre[i] << " " << punti[i] << endl;
        }
    }

    
    string classif[n];
    int k = 0;

    for(int i=0; i<n; i++) {
        if(serie[i] == 'B') {
            classif[k] = squadre[i];
            k++;
        }
    }

    cout << "\nSerie B:\n";
    for(int i=0; i<k; i++) {
        cout << classif[i] << endl;
    }

    
    int maxPunti = -1;
    string campione;

    for(int i=0; i<n; i++) {
        if(serie[i] == 'A' && punti[i] > maxPunti) {
            maxPunti = punti[i];
            campione = squadre[i];
        }
    }

    cout << "\nCampione Serie A: " << campione;

    return 0;
}