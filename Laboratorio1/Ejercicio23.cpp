#include<iostream>
using namespace std;

struct complejo{
	float real,imaginaria;
}z1,z2;

void pedirDatos();
complejo suma(complejo,complejo);
void muestra(complejo);

int main(){
	pedirDatos();
	
	complejo x = suma(z1,z2);
	
	muestra(x);	
	
	return 0;
} 

void pedirDatos(){
	cout<<"Digite el primer numero complejo: "<<endl;
	cout<<"Parte Real: "; cin>>z1.real;
	cout<<"Parte Imaginaria: "; cin>>z1.imaginaria;
	
	cout<<"\nDigite el segundo numero complejo: "<<endl;
	cout<<"Parte Real: "; cin>>z2.real;
	cout<<"Parte Imaginaria: "; cin>>z2.imaginaria;
}

complejo suma(complejo z1,complejo z2){
	z1.real += z2.real;
	z1.imaginaria += z2.imaginaria;
	
	return z1;
}

void muestra(complejo x){
	cout<<"\nLa suma es: "<<x.real<<" + "<<x.imaginaria<<"i"<<endl;
}

