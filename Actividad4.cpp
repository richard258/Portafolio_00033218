#include<iostream>
#include<conio.h>

using namespace std;

struct pais{
	char nombre[30];
	char capital[30];
	int numero;
}africa[5],america[5],asia[5],europa[5],oceania[5];

int main(){
	
	int af=0, am=0, as=0, eu=0, oc=0, max=0;
	
	cout<<"Ingrese datos de Africa: "<<endl<<"\n";
    for(int i=0;i<5;i++){
    	fflush(stdin);
    	cout<<"Digite el nombre del pais: "<<endl;
    	cin.getline(africa[i].nombre,30,'\n');
    	cout<<"Digite la capital del pais: "<<endl;
    	cin.getline(africa[i].capital,30,'\n');
    	cout<<"Digite el numero de habitantes del pais: "<<endl;
    	cin>>africa[i].numero;
    	af += africa[i].numero;
    	if(africa[i].numero>max){
    		max = africa[i].numero;
		}
    	cout<<"\n";
	}

	cout<<"Ingrese datos de America: "<<endl<<"\n";
    for(int i=0;i<5;i++){
    	fflush(stdin);
    	cout<<"Digite el nombre del pais: "<<endl;
    	cin.getline(america[i].nombre,30,'\n');
    	cout<<"Digite la capital del pais: "<<endl;
    	cin.getline(america[i].capital,30,'\n');
    	cout<<"Digite el numero de habitantes del pais: "<<endl;
    	cin>>america[i].numero;
    	am += america[i].numero;
    	if(america[i].numero>max){
    		max = america[i].numero;
		}
    	cout<<"\n";
	}
	
	cout<<"Ingrese datos de Asia: "<<endl<<"\n";
    for(int i=0;i<5;i++){
    	fflush(stdin);
    	cout<<"Digite el nombre del pais: "<<endl;
    	cin.getline(asia[i].nombre,30,'\n');
    	cout<<"Digite la capital del pais: "<<endl;
    	cin.getline(asia[i].capital,30,'\n');
    	cout<<"Digite el numero de habitantes del pais: "<<endl;
    	cin>>asia[i].numero;
    	as += asia[i].numero;
    	if(asia[i].numero>max){
    		max = asia[i].numero;
		}
    	cout<<"\n";
	}
	
	cout<<"Ingrese datos de Europa: "<<endl<<"\n";
    for(int i=0;i<5;i++){
    	fflush(stdin);
    	cout<<"Digite el nombre del pais: "<<endl;
    	cin.getline(europa[i].nombre,30,'\n');
    	cout<<"Digite la capital del pais: "<<endl;
    	cin.getline(europa[i].capital,30,'\n');
    	cout<<"Digite el numero de habitantes del pais: "<<endl;
    	cin>>europa[i].numero;
    	eu += europa[i].numero;
    	if(europa[i].numero>max){
    		max = europa[i].numero;
		}
    	cout<<"\n";
	}
	
	cout<<"Ingrese datos de Oceania: "<<endl<<"\n";
    for(int i=0;i<5;i++){
    	fflush(stdin);
    	cout<<"Digite el nombre del pais: "<<endl;
    	cin.getline(oceania[i].nombre,30,'\n');
    	cout<<"Digite la capital del pais: "<<endl;
    	cin.getline(oceania[i].capital,30,'\n');
    	cout<<"Digite el numero de habitantes del pais: "<<endl;
    	cin>>oceania[i].numero;
    	oc += oceania[i].numero;
    	if(oceania[i].numero>max){
    		max = oceania[i].numero;
		}
    	cout<<"\n";
	}
	    
		cout<<"Datos de Africa: "<<endl<<"\n";
	for(int i=0;i<5;i++){
		cout<<"Nombre del pais: "<<africa[i].nombre<<endl;
		cout<<"Capital del pais: "<<africa[i].capital<<endl;
		cout<<"Numero de habitantes del pais: "<<africa[i].numero<<endl;	
		cout<<"\n";
	}
	
	    cout<<"Datos de America: "<<endl<<"\n";
	for(int i=0;i<5;i++){	
		cout<<"Nombre del pais: "<<america[i].nombre<<endl;
		cout<<"Capital del pais: "<<america[i].capital<<endl;
		cout<<"Numero de habitantes del pais: "<<america[i].numero<<endl;
		cout<<"\n";
	}
	
		cout<<"Datos de Asia: "<<endl<<"\n";
	for(int i=0;i<5;i++){	
		cout<<"Nombre del pais: "<<asia[i].nombre<<endl;
		cout<<"Capital del pais: "<<asia[i].capital<<endl;
		cout<<"Numero de habitantes del pais: "<<asia[i].numero<<endl;
		cout<<"\n";
	}
	
 	    cout<<"Datos de Europa: "<<endl<<"\n";
	for(int i=0;i<5;i++){
		cout<<"Nombre del pais: "<<europa[i].nombre<<endl;
		cout<<"Capital del pais: "<<europa[i].capital<<endl;
		cout<<"Numero de habitantes del pais: "<<europa[i].numero<<endl;	
		cout<<"\n";
	}
	
		cout<<"Datos de oceania: "<<endl<<"\n";
	for(int i=0;i<5;i++){	
		cout<<"Nombre del pais: "<<oceania[i].nombre<<endl;
		cout<<"Capital del pais: "<<oceania[i].capital<<endl;
		cout<<"Numero de habitantes del pais: "<<oceania[i].numero<<endl;
		cout<<"\n";
	}
	
	cout<<"Poblacion total de Africa: "<<af<<endl;
	cout<<"Poblacion total de America: "<<am<<endl;
	cout<<"Poblacion total de Asia: "<<as<<endl;
	cout<<"Poblacion total de Europa: "<<eu<<endl;
	cout<<"Poblacion total de Oceania: "<<oc<<endl;
	cout<<"La capital con mayor poblacion tiene: "<<max<<" habitantes "<<endl;
	
	getch();
	return 0;
}
