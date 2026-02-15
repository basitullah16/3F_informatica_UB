#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Inserisci N: ";
    cin >> N;

    int a = 0, b = 1, c;

    if (N == 0) {
        cout << 0;
    }
    else if (N == 1) {
        cout << 1;
    }
    else {
        for (int i = 2; i <= N; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << "Termine " << N << ": " << b;
    }

    return 0;
}