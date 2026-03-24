#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int v[n];

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    bool ordinato = true;

    for(int i=1; i<n; i++) {
        if(v[i] < v[i-1]) {
            ordinato = false;
        }
    }

    if(ordinato)
        cout << "Ordinato";
    else
        cout << "Non ordinato";

    return 0;
}