#include <iostream>
using namespace std;

int main() {
    int stipendio = 10;
    int totale = 0;

    for(int i = 1; i <= 22; i++) {
        totale += stipendio;
        stipendio = stipendio * 2;
    }

    cout << "Totale: " << totale;

    return 0;
}