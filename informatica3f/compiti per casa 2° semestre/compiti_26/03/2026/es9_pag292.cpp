#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string citta[n];
    int abitanti[n];

    for(int i=0; i<n; i++) {
        cin >> citta[i];
        cin >> abitanti[i];
    }

    
    for(int i=0; i<n; i++) {
        cout << citta[i] << " " << abitanti[i] << endl;
    }

    
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(abitanti[i] > abitanti[j]) {
                swap(abitanti[i], abitanti[j]);
                swap(citta[i], citta[j]);
            }
        }
    }

    cout << "\nOrdinato:\n";
    for(int i=0; i<n; i++) {
        cout << citta[i] << " " << abitanti[i] << endl;
    }


    string nuova;
    int ab;

    cin >> nuova >> ab;

    citta[n] = nuova;
    abitanti[n] = ab;
    n++;

    
    int min = 0;
    for(int i=1; i<n; i++) {
        if(abitanti[i] < abitanti[min]) {
            min = i;
        }
    }

    for(int i=min; i<n-1; i++) {
        citta[i] = citta[i+1];
        abitanti[i] = abitanti[i+1];
    }
    n--;

    
    string citta1[n];
    int k = 0;

    for(int i=1; i<n; i+=2) {
        citta1[k++] = citta[i];
    }

    
    cout << "\nCitta1:\n";
    for(int i=0; i<k; i++) {
        cout << citta1[i] << endl;
    }

    return 0;
}