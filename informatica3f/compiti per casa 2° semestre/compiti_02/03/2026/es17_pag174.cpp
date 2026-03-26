#include <iostream>
using namespace std;

int main() {
    int a, b;

    do {
        cin >> a >> b;
    } while(a >= b);

    int num;

    while(true) {
        cin >> num;

        if(num < a || num > b) {
            break;
        }

        cout << num << " valido\n";
    }

    cout << "Numero fuori intervallo, fine";

    return 0;
}