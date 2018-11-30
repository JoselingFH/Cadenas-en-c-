/*E-6 Convertir dos cadenas de minusculas a MAYUSCULAS. 
Compararlas, y decidir si son iguales o no. */
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	char palabra1[50];
	char palabra2[50];
	
	cout<<"Ingrese una palabra en minuscula: "; cin.getline(palabra1,50,'\n');
	cout<<"Ingrese otra palabra en minuscula: "; cin.getline(palabra2,50,'\n');
	
	cout<<"\n\t Convertidas en Mayusculas: \n";	
	strupr(palabra1); cout<<palabra1<<endl;
	strupr(palabra2); cout<<palabra2<<endl;
	
	cout<<"\n";
	if(strcmp(palabra1,palabra2)==0){
		cout<<"Ambas palabras son iguales"<<endl;
	}  
	else{
		cout<<"Ambas palabras son diferentes"<<endl;
	}
	
	system("pause");
	return 0;
}
