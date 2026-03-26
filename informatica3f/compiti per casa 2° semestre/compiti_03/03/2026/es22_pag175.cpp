#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int quoziente = 0;

    while(a >= b) {
        a = a - b;
        quoziente++;
    }

    cout << "Quoziente: " << quoziente << endl;
    cout << "Resto: " << a;

    return 0;
}