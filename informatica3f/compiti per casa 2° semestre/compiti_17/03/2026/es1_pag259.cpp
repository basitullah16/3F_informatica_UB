#include <iostream>
using namespace std;

int main() {
    int n, indice;

    cout << "Dimensione: ";
    cin >> n;

    int v[n];

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    cout << "Indice da raddoppiare: ";
    cin >> indice;

    if(indice >= 0 && indice < n) {
        v[indice] = v[indice] * 2;
    }

    for(int i=0; i<n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}