/*E1- Hacer un programa que pida al usuario que digite una cadena de caracteres,
luego verificar la longitud de la cadena, y si ésta supera a 10 caracteres 
mostrala en pantalla, caso contrario no mostrarla.*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	char palabra[100];
	
	cout<<"Digite una cadena de caracteres: ";
	cin.getline(palabra,100,'\n');
	
		if(strlen(palabra)>10){
			cout<<"Usted Digito: "<<palabra<<endl;
		}
		else{
			cout<<"El numero de elementos que digito es menor a 10"<<endl;
		}
		
	system("pause");
	return 0;
}
