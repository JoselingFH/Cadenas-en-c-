/*E7- Pedir su nombre al usuario en MAYUSCULA, si su nombre comienza por la letra A,
convertir su nombre a minusculas, caso contrario no convertirlo. */
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	char nombre[50];
	
	cout<<"Ingrese su nombre en mayuscula: "; cin.getline(nombre,50,'\n');
	
	if(strncmp(nombre,"A",1)==0){
		strlwr(nombre);
		cout<<nombre<<endl;
	}
	else{
		cout<<"El nombre no comienza con la letra 'A'. "<<endl;
		
	}
	
	system("pause");
	return 0;
}
