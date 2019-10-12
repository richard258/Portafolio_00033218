#include<iostream>
using namespace std;

int main(){
	
	cout<<"Matriz diagonal superior\n\n";
	
	int matriz[5][5],filas=5,columnas=5;
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			matriz[i][j]=0;
		}
	} 
	
	cout<<"Digite el entero de[0][0]: ";
	cin>>matriz[0][0];
		cout<<"Digite el entero de[0][1]: ";
	cin>>matriz[0][1];
		cout<<"Digite el entero de[0][2]: ";
	cin>>matriz[0][2];
		cout<<"Digite el entero de[0][3]: ";
	cin>>matriz[0][3];
		cout<<"Digite el entero de[0][4]: ";
	cin>>matriz[0][4];
		cout<<"Digite el entero de[1][1]: ";
	cin>>matriz[1][1];
		cout<<"Digite el entero de[1][2]: ";
	cin>>matriz[1][2];
		cout<<"Digite el entero de[1][3]: ";
	cin>>matriz[1][3];
		cout<<"Digite el entero de[1][4]: ";
	cin>>matriz[1][4];
		cout<<"Digite el entero de[2][2]: ";
	cin>>matriz[2][2];
		cout<<"Digite el entero de[2][3]: ";
	cin>>matriz[2][3];
		cout<<"Digite el entero de[2][4]: ";
	cin>>matriz[2][4];
		cout<<"Digite el entero de[3][3]: ";
	cin>>matriz[3][3];
		cout<<"Digite el entero de[3][4]: ";
	cin>>matriz[3][4];
		cout<<"Digite el entero de[4][4]: ";
	cin>>matriz[4][4];
	
	cout<<"\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}
	return 0;
}
