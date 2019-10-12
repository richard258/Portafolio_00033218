#include<iostream>
using namespace std;

int main(){
	
    int i, arreglo[10], numeros;
    float suma, promedio;
    
    cout<<"Programa para calcular la suma y el promedio de 10 numeros enteros \n";
    while(numeros<=10){
    	cout<<"Digite un entero: ";
    	cin>>arreglo[i];
    	suma+=arreglo[i];
    	i++;
    	numeros+=1;
	}
	cout<<"La suma de los enteros es: "<<suma<<"\n";
	promedio=suma/10;
    cout<<"El promedio de los enteros es: "<<promedio<<"\n";
	return 0;
}
