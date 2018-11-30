/* E4- Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear otra cadena
para preguntarle al usuario su nombre, por ultimo añadir el nombre al final de la primera cadena
y mostrar el mensaje completo "Hola que tal(NombredelUsuario)". */

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	char frase1[]= "Hola que tal ";
	char frase2[50];
	
	cout<<"Ingrese su nombre: "; cin.getline(frase2,50,'\n');
	
	strcat(frase1,frase2);
	
	cout<<frase1<<endl;
	
	system("pause");
	return 0;
}
