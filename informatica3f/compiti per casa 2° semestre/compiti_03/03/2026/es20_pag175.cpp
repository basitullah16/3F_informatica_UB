#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int prodotto = 0;

    for(int i = 0; i < b; i++) {
        prodotto += a;
    }

    cout << "Prodotto: " << prodotto;

    return 0;
}