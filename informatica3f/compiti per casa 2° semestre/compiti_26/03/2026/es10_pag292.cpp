#include <iostream>
using namespace std;


int trovaMax(int v[], int n) {
    int max = 0;
    for(int i=1; i<n; i++) {
        if(v[i] > v[max]) {
            max = i;
        }
    }
    return max;
}


void inserisci(int v[], int &n, int pos, int valore) {
    for(int i=n; i>pos; i--) {
        v[i] = v[i-1];
    }
    v[pos] = valore;
    n++;
}

int main() {
    int n;
    cin >> n;

    int v[100];

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    int num;
    cin >> num;

    int pos = trovaMax(v, n);

    inserisci(v, n, pos, num);

    for(int i=0; i<n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}