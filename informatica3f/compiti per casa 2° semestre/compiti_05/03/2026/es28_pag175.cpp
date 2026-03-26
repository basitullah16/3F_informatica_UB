#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 3;

    for(int i = 1; i <= n; i++) {
        a = 2 * a + 1;
    }

    cout << a;

    return 0;
}