#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int somma = 0;
    int dispari = 1;

    for(int i = 0; i < N; i++) {
        somma += dispari;
        dispari += 2;
    }

    cout << "Quadrato: " << somma;

    return 0;
}