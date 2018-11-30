/* E9- Realice un programa que lea una cadena de caracteres de la entrada estándar y muestre 
en la salida estándar cuántas ocurrencias de cada vocal existen en la cadena. */
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	char cadena[50];
	int V_a=0,V_e=0,V_i=0,V_o=0,V_u=0;
	
	cout<<"Ingrese una frase: "; 
	cin.getline(cadena,50,'\n');
	
	for(int i=0;i<50;i++){
		switch(cadena[i]){
			case 'a': V_a++; break;
			case 'e': V_e++; break;
			case 'i': V_i++; break;
			case 'o': V_o++; break;
			case 'u': V_u++; break;		
		}
	}
cout<<"\n\t Ocurrencias de vocales en la frase:  \n";
	cout<<"Vocal a: "<<V_a<<endl;
	cout<<"Vocal e: "<<V_e<<endl;	
	cout<<"Vocal i: "<<V_i<<endl;	
	cout<<"Vocal o: "<<V_o<<endl;	
	cout<<"Vocal u: "<<V_u<<endl;	
	
	system("pause");
	return 0;
}
