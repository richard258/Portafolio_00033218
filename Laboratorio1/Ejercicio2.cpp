#include<iostream>
#include<stdlib.h>
using namespace std;

void raiz(float indice, float maximo);

int main(){
	float indice, maximo;
	
	while(indice<0.0001){
		cout<<"Ingrese un numero: ";
			cin>>indice;	
	}
	raiz(indice,maximo);
	system("pause");
	return 0;
}

void raiz(float indice, float maximo){
	if(indice*indice<=maximo)
		raiz(indice+1, maximo);
	else{
		cout<<"la raiz cuadrada es: "<<indice-2<<endl;
	}		
}
