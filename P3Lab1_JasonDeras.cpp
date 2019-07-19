#include<iostream>
using namespace std;
#include<string>

int **matriz,filas=0,columnas=0;
void imprimeMatriz(int **matriz,int size);
void printMatriz(int** matriz, int size);
void liberarMatriz(int **&matriz, int size);
bool triangulos(int x);
void returnTriangulos(int x);

	int main(){
	
		filas=5,columnas=5;
		int resp=1;
		int op;
		int op2;
		int numero;
		int maximof[filas]={-888,-888,-888,-888,-888};
		int minimo[columnas]={888,888,888,888,888};
		int cont=0;
		int numero2;
		string cad;
		char []arreglo=NULL;
		int size;
		
		while(resp==1){
		
			cout<"Menu\n\n";
			cout<<"1. Matriz\n";
			cout<<"2. Numeros tringulares\n";
			cout<<"3. Arreglo\n";
			cout<<"Ingrese una opcion: ";
			cin>>op;
			cout<<"\n\n";
			
			switch(op){
				
				case 1:
					
					matriz=new int*[filas];
         			for(int i=0;i<filas;i++){
					 	matriz[i]=new int [columnas];
					}//Llenado de la matriz de puntero
							
					for(int i=0;i<filas;i++){
						for(int j=0;j<columnas;j++){
							cout<<"Ingrese un numero para la posicion["<<i<<"],["<<j<<"]: ";
							cin>>numero;
							matriz[i][j]=numero;
						}//Fin del segundo for
					}//Fin del primer for
					
					cout<<"\n\n\n";
					cout<<"La matriz\n\n";	
				 	printMatriz(matriz,5);
            		
            		cout<<"\n\n\n";		
					for(int i=0;i<filas;i++){
						for(int j=0;j<columnas;j++){
							if(matriz[i][j]>maximof[i]){
								maximof[i]=matriz[i][j];
							}//Fin del if de las sillas 
							if(matriz[i][j]<minimo[j]){
								minimo[j]=matriz[i][j];
							}//If que valida donde estan los puntos de las sillas
						}//Fin del segundo for de las sillas calculo
					}//Fin del primer for de las sillas calculo
					
					cout<<"\n\n\n";	
					for(int i=0;i<filas;i++){
						for(int j=0;j<columnas;j++){
							if(maximof[i]==minimo[j]){
								cout<<"Punto de la silla en: ["<<i<<"],["<<j<<"]  es :"<<maximof[i];
								cont++;
							}//If de impresion de las las sillas
						}//Fin del segundo for de las sillas
					}//Fin del primer for de las sillas
					cout<<"\n\n\n";	
					cout<<"Puntos de sillas totales: "<<cont<<"\n\n\n";
					
					//Liberacion de la matriz
					liberarMatriz(matriz, 5);
					
				break;
					
				case 2:
					
					cout<<"Ingrese un numero: ";
					cin>>numero2;
					if(triangulos(numero2)){
						returnTriangulos(numero2);
					}//Fin del if de los triangulares
						
				break;
					
				case 3:
					cout<<"Ingrese una cadena: ";
					cin>>cad;
					size=cad.length();
					for(int i=0;i<size;i++){
						arreglo[i]=cad.;
					}
					
				break;
					
				default:
					cout<<"Opcion no valida\n\n";
				break;
			}//Fin del switch de la opciones
			cout<<"Volver al menu?1.-Si,2.-No: ";
			cin>>resp;
		}//Fin del while del menu
		
		//Liberacion de la matriz
		liberarMatriz(matriz, 5);
		
		
		system("pause");
		return 0;
		
	}//Fin del main
	
void printMatriz(int** matriz, int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        	cout<<"["<<matriz[i][j]<<"]";
		}//Fin del for de impresion
		cout<<"\n";
    }//Fin del for de impresion
}//Fin del metodo para imprimir la matriz

void liberarMatriz(int**& matriz, int size){
        for(int i=0;i<size;i++){
            if (matriz[i]!=NULL){
                delete[]matriz[i];
                matriz[i]=NULL;
            }
        }
        if(matriz!=NULL){
                delete[] matriz;
                matriz=NULL;
        }
}//Fin del metodo para liberar la matriz

bool triangulos(int x){
	
	bool equilatero = false;
	int numero,cont=0, paso;
	
	for(int j=1 ; j<=x ; j++){
		numero=(j*(j+1))/2;
		if(numero==x){
			equilatero = true;
		}
		if(numero<x){
			paso = numero;
		}
		if(cont==x){
			equilatero = false;
		}
		cont++;
	}
	return equilatero;
}//Metodo que valida si el numero es Traingular equilatero

void returnTriangulos(int x){
	int numero,cont=0, paso;
	for(int j=1 ; j<=x ; j++){
		numero=(j*(j+1))/2;
		if(numero<x){
			paso = numero;
		}
		cont++;
	}
	cout<<paso;
}//Fin del metodo que retorna si es triangular
