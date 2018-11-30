/* E8- Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el otro real,
convertirlos a sus respectivos valores y por ultimo sumarlos. */
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	char cadena1[50],cadena2[50];
	int entero;
	float real, suma=0;
	
	cout<<"Ingrese un numero entero: "; cin.getline(cadena1,50,'\n');
	cout<<"Ingrese un numero real: "; cin.getline(cadena2,50,'\n');
	
	entero= atoi(cadena1);
	real= atof(cadena2);
	suma= entero + real;
	
	cout<<"La suma de ambos valores es: "<<suma<<endl;
	
	system("pause");
	return 0;
}
