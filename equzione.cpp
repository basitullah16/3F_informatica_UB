
#include <iostream>
#include <cmath>
using namespace std;
int main() {
double a,b,c;
cout<<"inserisci a,b,c ";
cin>> a>>b>>c;
if (a==0) {
cout<<"L'equazione non è di secondo grado.";
return 0;
}
double delta= b*b-4*a*c;
if (delta>0) {
double x1= (-b+ sqrt(delta))/(2*a);
double x2=(-b- sqrt(delta))/(2*a);
cout<<"due soluzioni reali: x1 ="<< x1 << ", x2 = ";
}
else if (delta == 0) {
double x = -b/(2*a);
cout<< "una soluzioe reale doppia: x = ";
}
else {
cout<<"L'equazione non ha radici reali.";
}
return 0;
}