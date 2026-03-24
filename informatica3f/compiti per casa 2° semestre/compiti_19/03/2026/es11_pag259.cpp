#include <iostream>
using namespace std;

int main() {
    int v[10];

    for(int i=0; i<10; i++) cin >> v[i];

    bool ok = true;

    for(int i=0; i<10; i+=2) { 
        if(v[i] % 2 != 0) {
            ok = false;
        }
    }

    if(ok)
        cout << "Tutti pari";
    else
        cout << "Non tutti pari";

    return 0;
}