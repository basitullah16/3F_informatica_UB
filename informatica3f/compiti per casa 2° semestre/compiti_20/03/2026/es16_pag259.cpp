#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int v[n];
    for(int i=0; i<n; i++) cin >> v[i];

    int pari[n], dispari[n];
    int p=0, d=0;

    for(int i=0; i<n; i++) {
        if(v[i] % 2 == 0) {
            pari[p] = v[i];
            p++;
        } else {
            dispari[d] = v[i];
            d++;
        }
    }

    cout << "Pari:\n";
    for(int i=0; i<p; i++) cout << pari[i] << " ";

    cout << "\nDispari:\n";
    for(int i=0; i<d; i++) cout << dispari[i] << " ";

    return 0;
}