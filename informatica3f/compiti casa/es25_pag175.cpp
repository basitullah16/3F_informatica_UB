#include <iostream>
using namespace std;

int main() {
    double stipendio = 10;
    double totale = 0;

    for (int i = 1; i <= 22; i++) {
        totale += stipendio;
        stipendio = stipendio * 2;
    }

    cout << "Totale dopo 22 giorni: " << totale << " euro";

    return 0;
}