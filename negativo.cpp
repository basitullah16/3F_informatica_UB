#include <iostream>
using namespace std;
int main() {
int n;
cout<<"inserisci un numero: ";
cin>>n;
//intervallo (-5, +10) significa: maggiore di -5 e minore o uguale a 10
if (n<= -5 || n>10) {
cout<<"il dato numero è fuori dall'intervallo.";
} else {
cout<<"il numero è presente nell intervallo.";
}
return 0;
}
