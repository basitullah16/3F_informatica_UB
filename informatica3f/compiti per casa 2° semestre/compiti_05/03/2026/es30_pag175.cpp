#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a = 1;

    while(a <= N) {
        a = a * 2;
    }

    cout << a;

    return 0;
}