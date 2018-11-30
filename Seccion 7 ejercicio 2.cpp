/* E2- Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar
todo su contenido hacia otro arreglo de caracteres. */

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	char contenido1[100];
	char contenido2[100];
	
	cout<<"Ingrese su nombre: ";
	cin.getline(contenido1,100,'\n');
	
	strcpy(contenido2,contenido1);
	
	cout<<contenido2<<endl;
	
	
	system("pause");
	return 0;
}
