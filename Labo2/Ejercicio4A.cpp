#include<iostream>
#include<cmath>
using namespace std;

long double functi(int n, double suma){
    if(n==0){
        return suma;
        }else{
            return suma+(((pow(-1, n+1))/((2*n)-1))+ functi(n-1, suma));
            }
    }
    int main(void){
        int numero;
        cout<<"Ingrese un numero: ";
        cin>>numero;
        cout<<4*functi(numero, 0);
        return 0;
        }
