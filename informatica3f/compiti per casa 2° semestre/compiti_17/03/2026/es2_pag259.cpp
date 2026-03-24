#include <iostream>
using namespace std;

int main() {
    int n;
    char c;

    cout << "Dimensione: ";
    cin >> n;

    char v[n];

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    cout << "Carattere da cercare: ";
    cin >> c;

    int conta = 0;

    for(int i=0; i<n; i++) {
        if(v[i] == c) {
            conta++;
        }
    }

    cout << "Compare " << conta << " volte";

    return 0;
}