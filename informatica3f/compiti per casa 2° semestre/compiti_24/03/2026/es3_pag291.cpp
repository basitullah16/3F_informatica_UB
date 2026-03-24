#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int v[n];

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    int x;
    cin >> x;

    int pos = -1;

    // cerca
    for(int i=0; i<n; i++) {
        if(v[i] == x) {
            pos = i;
            break;
        }
    }

    // elimina
    if(pos != -1) {
        for(int i=pos; i<n-1; i++) {
            v[i] = v[i+1];
        }
        n--; // riduco dimensione
    }

    // stampa
    for(int i=0; i<n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}