#include<iostream>
using namespace std;

int main(){
	
	int numero, invertir;
	
	cout<<"Digite un numero entero: \n";
	cin>>numero;
	while(numero>0){
		invertir=(invertir*10)+(numero%10);
		numero=numero/10;
	}
	cout<<"El numero invertido es: "<<invertir;
}
