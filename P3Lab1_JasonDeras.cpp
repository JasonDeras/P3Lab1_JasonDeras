#include<iostream>
using namespace std;

	int main(){
		
		int matriz[5][5],filas=5,columnas=5;
		int resp=1;
		int op;
		
		while(r==1){
		
			cout<"Menu\n\n";
			cout<<"1. Operaciones con matrices\n";
			cout<<"2. Numeros tringulares\n";
			cout<<"3. Arreglo\n"
			cout<<"Ingrese una opcion: ";
			cin>>op;
			cout<<"\n\n";
			
			switch(op){
				
				case 1:
					cout<<"Matriz que se creo\n\n";
					
					break;
					
				case 2:
					
					break;
					
				case 3:
					
					break;
					
				default:
					cout<<"Opcion no valida\n\n";
			}//Fin del switch de la opciones
			cout<<"Volver al menu?1.-Si,2.-No: ";
			cin>>r;
		}//Fin del while del menu
		system("pause");
		return 0;
	}//Fin del main
