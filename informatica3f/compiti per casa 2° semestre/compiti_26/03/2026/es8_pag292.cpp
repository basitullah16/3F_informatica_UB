#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string titolo[n], autore[n];
    int copie[n];

    for(int i=0; i<n; i++) {
        cin >> titolo[i];
        cin >> autore[i];
        cin >> copie[i];
    }

    int scelta;
    cin >> scelta;

    
    if(scelta == 1) {
        string t;
        cin >> t;

        for(int i=0; i<n; i++) {
            if(titolo[i] == t) {
                if(copie[i] > 0) {
                    copie[i]--;
                    cout << "Prestito effettuato\n";
                } else {
                    cout << "Non disponibile\n";
                }
            }
        }
    }


    if(scelta == 2) {
        string t;
        cin >> t;

        for(int i=0; i<n; i++) {
            if(titolo[i] == t) {
                copie[i]++;
            }
        }
    }

    
    if(scelta == 3) {
        string a;
        cin >> a;

        for(int i=0; i<n; i++) {
            if(autore[i] == a) {
                cout << titolo[i] << endl;
            }
        }
    }

    return 0;
}