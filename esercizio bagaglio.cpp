#include <iostream>
using namespace std;

int main(){
    double tariffa,peso,prezzototale;
    cout<<"inserisci la tariffa";
    cin>> tariffa;
    cout<<"inserisci il peso del bagaglio";
    cin>> peso;
    prezzototale=tariffa;
    if (peso>20){
        cout<<"il prezzo totale è "<<tariffa <<"euro";
        }else{
        prezzototale=tariffa+(peso-20)
        prezzototale=prezzototale*2;
        cout<<"il prezzo totale è "<<prezzototale <<"euro";
        }
        return 0;



}
