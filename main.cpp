#include <iostream>
using namespace std;
int main()
{ double liczba9; 
 double ulamek1;
    int n;
    int t[10]={0};
    int u[100]={0}; 
    int i=9;
cout<<"Podaj liczbe:";
cin>>liczba9; 

n=(int) liczba9; 
ulamek1=liczba9 - n; 
while(n>0){ 
    t[i]=n%2;
    n=n/2;
    i--;}
for(int i=0; i<100; i++){ 
    ulamek1=2*ulamek1;
if(ulamek1>=1) {u[i]=1; ulamek1=ulamek1-1;}
    else u[i]=0;
}
cout<<"binarnie:";
for(i=0;i<10;i++)cout<<t[i];
cout<<".";
for(i=0;i<100;i++)cout<<u[i];
cout<<"aksbjafihbiwfcbcfiqfijbfibqfeoiubfqwoibfwoubqwf ";
    return 0;
}
