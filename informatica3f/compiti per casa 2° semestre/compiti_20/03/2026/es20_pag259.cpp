#include <iostream>
using namespace std;

int main() {
    char v1[20], v2[5];

    for(int i=0; i<20; i++) cin >> v1[i];
    for(int i=0; i<5; i++) cin >> v2[i];

    for(int i=0; i<20; i++) {
        for(int j=0; j<5; j++) {
            if(v1[i] == v2[j]) {
                v1[i] = '*';
            }
        }
    }

    for(int i=0; i<20; i++) {
        cout << v1[i] << " ";
    }

    return 0;
}