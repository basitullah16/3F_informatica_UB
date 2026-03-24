#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string v[n];

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-1-i; j++) {
            if(v[j] > v[j+1]) {
                string temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }

    cout << "Primo: " << v[0] << endl;
    cout << "Ultimo: " << v[n-1] << endl;

    return 0;
}