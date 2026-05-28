#include <iostream>
#include <cstring>
using namespace std;

struct studente {
char nome[30];
char cognome[30];
float voto;
};

float votoMedia(studente s[], int n){

int somma = 0;
for(int i= 0; i<n ; i++){
    somma += s[i].voto;
}

 return somma/n;

}

int votoAlto(studente s[], int n){
    int max = s[0].voto;
    for(int i = 0; i<n; i++){
        if(s[i].voto > s[max].voto){
            max = i;
        }
    }

    return max;

}

int cerca(studente s[], int n, char cognome[]){
    for(int i = 0; i<n; i++){
        if(strcmp(s[i].cognome, cognome) == 0) {
            return i;
        }
    }
}

int suff(studente s[], int n){

    int pos = 0;

    for(int i = 0; i<n; i++){
        if(s[i].voto > 6){
            pos = +1;
        }
    }



    return pos;

}



int main(){

int n;
do {
    cout << "inserisci il numero di studenti da registrare(massimo 10): ";
    cin >> n;
} while (n >= 10);

studente s[n];

for (int i = 0; i < n; i++) {

cout << "inserisci il cognome";
cin >> s[i].cognome;

cout << "inserisci il nome dello studente: ";
cin >> s[i].nome;

cout << "inserisci il voto dello studente: ";
cin >> s[i].voto;

}

for (int i = 0; i<n; i++){
    cout << "ELENCO: " << endl;
    cout << s[i].cognome << s[i].nome << endl;
}

char name[20];
cout<< "inserisci il cognome da cercare: ";
cin >> name;

int trovato = cerca(s,n, name);
if (trovato != -1){
    cout << "trovato: "
         << s[trovato].nome << " "
         << s[trovato].cognome << " "
         << s[trovato].voto << " ";

}

cout << "la media dei voti è: " << votoMedia (s,n);
cout << "le sufficienze sono: "<< suff(s,n);
cout << "il voto più alto è: " << votoAlto(s,n);


return 0;

}