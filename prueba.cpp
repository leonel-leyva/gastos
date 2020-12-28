#include <iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int tarjeta,efectivo,ahorro;
int ingreso,opc,opc2;


void ingresos(){
	
	cout << "********FORMA DE INGRESO********  \n";
			cout << "1-AHORROS"<< endl;;
			cout << "2-EFECTIVO "<< endl;;
			cout << "3-TARJETA "<< endl;;
			cout << "4-SALIR \n" << endl;
			cin >> opc2;
				system("cls");
	     do
			{
			switch (opc){	
				case 1:
					cout << "DIJITE EL DINERO QUE DESEA INGRESAR \n";
					cin >> ingreso;
					system("pause");
				    system("cls");
					break;
					
				case 2:
				cout << "DIJITE EL DINERO QUE DESEA INGRESAR \n";
					cin >> ingreso;
					system("pause");
				    system("cls");
				    
					break;
					
				case 3:
					cout << "DIJITE EL DINERO QUE DESEA INGRESAR \n";
					cin >> ingreso;
					system("pause");
				    system("cls");
					break;
					
				case 4:
					break;
					
					break;	
					
					
				}
		} while (opc2 != 4);
}	
	


int main() {
		//cambia color de letra y fondo 
	system("color 0a");

  	
	    	cout << "---------------------------------------------------\n" ;
		cout << "---------********BIENBENIDO*******----------------- \n";
		cout << "---------------------------------------------------\n"	;
		cout << endl;        
				//MENU PRICIPAR PARA EL CLIENTE 
				
				cout << "1-INGRESAR DINERO"<< endl;;
				cout << "2-GASTOS "<< endl;;
				cout << "3-TRANFERENCIA "<< endl;;
				cout << "4-SALIR \n" << endl;
				cout << "--------------------------------------------\n";
				cout << "POR FAVOR PONGA LA OPCION DECIEADA  \n";
				cin >> opc;
	         
				system("cls");
	do
			{
	
			switch (opc){	
				case 1:
					ingresos();
				    system("pause");
				    system("cls");
					break;
					
				case 2:
				
					break;
					
				case 3:
				
					break;
					
			
					
				case 4:
				break;
				break;
					
				}
	} while (opc2 != 4);
			
	
	return 0;
}
