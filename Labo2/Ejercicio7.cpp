#include <iostream>

using namespace std;
void imprimirLista(int a, int b);

int main(void){
	int sup=0, inf=0;
	ingresarDatos:
	cout<<"Ingrese el limite inferior: ";
	cin>>inf;
	cout<<"Ingrese el limite superior: ";
	cin>>sup;
	if(inf>sup){
		cout<<"El limite inferior es mayor al limite superior."<<endl;
		cout<<"Ingrese los datos nuevamente."<<endl;
		goto ingresarDatos;
	}
	cout<<endl;
	cout<<"Los numeros entre "<<inf<<" y "<<sup<<" son: ";
	cout<<endl;
	cout<<endl;
	imprimirLista(inf, sup);
	return 0;
}

void imprimirLista(int a, int b){
	if(a<b && a+1!=b){
		cout<<(a+1)<<" ";	
		imprimirLista(a+1, b);
	}
}


