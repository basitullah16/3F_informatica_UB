#include <iostream>
using namespace std;

int main() {
    int n, min, max;

    cin >> n;

    int v[n];

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    cout << "Inserisci minimo e massimo: ";
    cin >> min >> max;

    for(int i=0; i<n; i++) {
        if(v[i] >= min && v[i] <= max) {
            cout << v[i] << " ";
        }
    }

    return 0;
}