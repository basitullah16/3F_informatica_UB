#include <iostream>
using namespace std;
int main() {
    const float pk=1.20;
    float kmi,kmf,kmp,pf;
    char nome [20];
    cout<<"inserisci il nome del cliente";
    cin>>nome;
    cout<<"inserisci i kmi";
    cin>>kmi;
    cout<<"inserisci i kmf";
    cin>>kmf;
    kmp=kmf-kmi;
    cout<<"i chilometri totali sono "<<kmp;
    pf=pk*kmp;
    cout<<"il prezzo totale è "<<pf;

    cout<<"il prezzo totale è "<<pf;

    return 0;
}