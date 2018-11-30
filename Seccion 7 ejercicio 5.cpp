//E5- Hacer un programa que determine si una palabra es políndroma.

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	char palabra[50]; 
	char palabra1[50]; 

	cout<<"Ingrese una palabra: "; cin.getline(palabra,50,'\n'); 
	
	strcpy(palabra1,palabra); 
	
	strrev(palabra1);
	
	if(strcmp(palabra,palabra1)==0){
		cout<<palabra<<" ,Es una palabra polindroma."<<endl;
	}
	else{
		cout<<palabra<<" , No es una palabra polindroma."<<endl;
	}
	
	system("pause");
	return 0;
}
