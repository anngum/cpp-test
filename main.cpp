#include <iostream>

using namespace std;

int main()
{ double liczba10; // liczba z u³amkiem dziesiêtnym
 double ulamek;
    int n;
    int t[10]={0};
    int u[100]={0}; //na ulamek binarny
    int i=9;
	
cout<<"Podaj liczbe";
cin>>liczba10; //wczytanie liczby z ulamkiem
//cin>>n;

n=(int) liczba10; //pobieramy czesc calkowita
ulamek=liczba10 - n; // czesc ulamkowa

while(n>0){ //petla do czesci calkowitej
    t[i]=n%2;
    n=n/2;
    i--;}
	
for(int i=0; i<100; i++){ //petla dla czesci ulamkowej
    ulamek=2*ulamek;
if(ulamek>=1) {u[i]=1; ulamek=ulamek-1;}
    else u[i]=0;
}
cout<<"binarnie to:";

for(i=0;i<10;i++)cout<<t[i];

cout<<".";

for(i=0;i<100;i++)cout<<u[i];

    return 0;
}
