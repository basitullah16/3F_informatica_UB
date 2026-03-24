#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int v[100]; 

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    int x;
    cin >> x;

    int pos = 0;

    
    while(pos < n && v[pos] < x) {
        pos++;
    }


    for(int i=n; i>pos; i--) {
        v[i] = v[i-1];
    }

    v[pos] = x;
    n++;

    
    for(int i=0; i<n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}