#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a = 1, b = 1, c;

    if(N == 1 || N == 2) {
        cout << 1;
        return 0;
    }

    for(int i = 3; i <= N; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << b;

    return 0;
}