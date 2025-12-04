#include <iostream>
using namespace std;
int main() {
char ch;
cout<<"inserisci un carattere: ";
cin>> ch;
if (ch == 'S' || ch=='s') {
cout << "Si";
}
else if (ch == 'N' || ch == 'n') {
cout << "No";
}
else {
cout << "Errato";
}
return 0;
}