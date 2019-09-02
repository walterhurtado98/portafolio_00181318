#include<iostream>
#include<conio.h>

using namespace std;

struct info_paises{
	
	char nombrePais[30];
	char capital[30];
	int habitantes;
};

struct continente{
	char nombre[30];
	struct info_paises info_pais;
} continentes[5];

int main(){
	
	for(int i=0; i<5;i++){
		fflush(stdin);
		cout<< "Digite el nombre del continente: ";
		cin.getline(continentes[i].nombre,30,'\n');
		cout<<"\n";
		
		for(int j=0; j<5;j++){
	    fflush(stdin);
		cout<< "Digite el nombre del pais: ";
		cin.getline(continentes[i].info_pais.nombrePais,30,'\n');
		cout<< "Digite el nombre de la capital: ";
		cin.getline(continentes[i].info_pais.capital,30,'\n');
		cout<< "Digite la cantidad de habitantes: ";
		cin>>(continentes[i].info_pais.habitantes);
		cout<<"\n";}
		}
		
		cout<<"\nimprimiendo los datos....."<<"\n"<<"\n"<<"\n";
		
		
		for(int i=0;i<5;i++){
			cout<<"Continente: "<<continentes[i].nombre<<"\n"<<endl;
		
		for(int l=0;l<5;l++){
			cout<<"Nombre del pais: "<<continentes[i].info_pais.nombrePais<<endl;
			cout<<"Nombre de la capital: "<<continentes[i].info_pais.capital<<endl;
			cout<<"Numero de habitantes: "<<continentes[i].info_pais.habitantes<<endl;
			cout<< "\n";
			
				cout<<continente.nombre<<"\n";
					cout<<"La sumatoria de habitantes del continente es " continentes[0].info_pais<<"\n";
			}
	}
	
		
	getch();
	return 0;
}
