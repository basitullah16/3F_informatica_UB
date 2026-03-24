#include <iostream>
using namespace std;

bool primo(int x) {
    if(x < 2) return false;

    for(int i=2; i<x; i++) {
        if(x % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int v[n];
    for(int i=0; i<n; i++) cin >> v[i];

    for(int i=0; i<n; i++) {
        if(primo(v[i])) {
            cout << v[i] << " ";
        }
    }

    return 0;
}