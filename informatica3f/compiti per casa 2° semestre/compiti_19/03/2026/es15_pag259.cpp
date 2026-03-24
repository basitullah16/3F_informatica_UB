#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string a1[n], a2[n];

    for(int i=0; i<n; i++) cin >> a1[i];
    for(int i=0; i<n; i++) cin >> a2[i];

    string nome;
    cin >> nome;

    bool trovato1 = false, trovato2 = false;

    for(int i=0; i<n; i++) {
        if(a1[i] == nome) trovato1 = true;
        if(a2[i] == nome) trovato2 = true;
    }

    if(trovato1 && trovato2)
        cout << "Presente in entrambi";
    else
        cout << "Non presente in entrambi";

    return 0;
}