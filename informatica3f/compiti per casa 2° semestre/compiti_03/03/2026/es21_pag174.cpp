#include <iostream>
using namespace std;

int main() {
    int a, b;
    int count = 0;

    while(true) {
        cin >> a >> b;
        count++;

        if(a == b) {
            cout << "Terminato: numeri uguali\n";
            break;
        }

        if(b > a) {
            cout << "Terminato: secondo maggiore del primo\n";
            break;
        }
    }

    cout << "Coppie inserite: " << count;

    return 0;
}