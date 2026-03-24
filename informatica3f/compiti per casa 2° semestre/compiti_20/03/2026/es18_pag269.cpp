#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    float prezzi[n];

    for(int i=0; i<n; i++) cin >> prezzi[i];

    for(int i=0; i<n; i++) {
        if(prezzi[i] < 5)
            prezzi[i] = prezzi[i] * 1.10;
        else
            prezzi[i] = prezzi[i] * 1.06;
    }

    for(int i=0; i<n; i++) {
        cout << prezzi[i] << " ";
    }

    return 0;
}