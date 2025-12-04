#include <iostream>
using namespace std;
int main() {
float limite, t1, t2, t3, media;
cout<<"inserisci il valore limite di ascensione: ";
cin>>limite;
cout<<"inserisci la temperatura 1: ";
cin>>t1;
cout<<"inserisci la temperatura 2: ";
cin>>t2;
cout<<"inserisci la temperatura 3: ";
cin>>t3;
media=(t1+t2+t3)/3;
cout<<"La media delle temperature è: "<<media;
if (media<limite) {
cout<<"Il riscaldamento verrà acceso.";
} else {
cout<<"Il riscaldamento resterà spento.";
}
return 0;
}