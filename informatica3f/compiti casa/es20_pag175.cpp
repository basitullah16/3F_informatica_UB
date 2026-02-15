#include <iostream>
using namespace std;

int main() {
    int a, b;
    int prodotto = 0;

    cout << "Inserisci due numeri: ";
    cin >> a >> b;

    for (int i = 0; i < b; i++) {
        prodotto = prodotto + a;
    }

    cout << "Prodotto: " << prodotto;

    return 0;
}