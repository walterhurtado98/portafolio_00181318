#include<iostream>
using namespace std;


struct complejo{
        float real,imaginaria;
        }
        
void pedirDatos();
void valorAbsoluto();

int main(){
    pedirDatos();
    valorAbsoluto();

    
  return 0;
     }    
     
         void pedirDatos(){
      
      cout<<"Ingrese la parte real del complejo: "; cin>> real;
      cout<<"Ingrese la parte imaginaria del complejo: "; cin>> imaginaria;
      }  
      
  void valorAbsoluto(){
      sqrt(pow(real,2)+pow(imaginaria,2));
      }   
      
      cout<<"El numero complejo es: "<<complejo;
      cout<<"Este es el valor absoluto: "<< valorAbsoluto;
