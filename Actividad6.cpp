#include<iostream>
using namespace std;
int recibir(int x, int low, int high, int arreglo[]);
int main()
{
	
cout<<"Programa para buscar la casilla de un numero dentro de un arreglo\n";
	cout<<"arreglo={1,3,4,5,17,18,31,33}\n";
	int arreglo[8]={1,3,4,5,17,18,31,33};
	int low=0, high=7,x;
	cout<<"Digite un numero entero: ";
	cin>>x;
	int i=recibir(x, low,  high, arreglo);
	if(i==-1){
		cout<<"El numero no se encontro"<<endl;
	}
	else{
		cout<<"El numero esta en la casilla "<<i<<endl;
	}
}

int recibir(int x, int low, int high, int arreglo[]){
	int mid;
	
	if(low>high){
	return(-1);	
	}
	mid=(low+high)/2;
	if(x==arreglo[mid])
	return(mid);
	if(x<arreglo[mid])
	return recibir(x,low,mid-1,arreglo);
	else
	return recibir(x,high,mid+1,arreglo);
}