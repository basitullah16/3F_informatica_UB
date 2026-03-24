#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int v1[n], v2[n], somma[n];

    cout << "Inserisci v1:\n";
    for(int i=0; i<n; i++) {
        cin >> v1[i];
    }

    cout << "Inserisci v2:\n";
    for(int i=0; i<n; i++) {
        cin >> v2[i];
    }

    for(int i=0; i<n; i++) {
        somma[i] = v1[i] + v2[i];
    }

    cout << "Vettore somma:\n";
    for(int i=0; i<n; i++) {
        cout << somma[i] << " ";
    }

    return 0;
}