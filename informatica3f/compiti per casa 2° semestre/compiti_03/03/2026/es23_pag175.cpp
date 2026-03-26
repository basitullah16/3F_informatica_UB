#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    int risultato = 1;

    for(int i = 0; i < Y; i++) {
        risultato *= X;
    }

    cout << risultato;

    return 0;
}