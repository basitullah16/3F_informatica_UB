#include <iostream>
using namespace std;
int main(){
    int settimane;
    char supplemento;
    double costototale=100;
    
    cout<<"inserisci il numero di settimane (1 o 2)";
    cin>>settimane;
    cout<<"desideri il supplemento? (s/n)";
    cin>>supplemento;
    if (settimane==1) {
        costototale+=600;
    }
    else if (settimane == 2) {
        costototale +=1100;
    }
    else {
        cout<<"numero settimane non valid!";
        return 0;
    }
    if (supplemento == 's' || supplemento =='S') {
        costototale+= settimane *20;
    }
    cout<<"il costo totale del soggiorno è: " <<costototale<< " euro";
    
    return 0;
}