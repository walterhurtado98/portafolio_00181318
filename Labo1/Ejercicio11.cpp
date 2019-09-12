#include<iostream>

using namespace std;

int main(){
   
    int m[5],r,i;
    
    for(i=0; i<5; i++){
        
        cout<<"Digite un numero: "; cin>>m[i];
        }
    
    r=m[0];
    for(i=0; i<5; i++){
        
        if(r<m[i]){
            
            r=m[i];
            }
        }
        
        cout<< "El valor maximo del arreglo es: "<<r<<endl;
        
    return 0;
 }
