#include <iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int tarjeta=0,efectivo=0,ahorro=0,pago=0,abono=0;
int ingreso,opc,opc2,opc3,contador;


//saldos totales 
void saldos_toales(){
	
	cout<<"******************************************* "<<endl;
    cout<<"***** GASTOS REALISADOS ******** "<<endl;
    cout<<"tranferencuas realisadas "<< contador<<endl;
    cout<<"SALDO EFECTIVO "<<efectivo <<endl;
    cout<<"SALDO EN TARJETA : "<<tarjeta<<endl;
    cout<<"SALDO DE AHORROS "<<ahorro<<endl;
    cout<<"******************************************* "<<endl;	
}

// realisar pagos 
void pagos(){
	
	 cout<< "INGRESE CANTIDAD A PAGAR \n";
	 cin >> pago;
	 cout<< endl;
	cout << "********FORMA DE PAGO********  \n";
			cout << "1-AHORROS"<< endl;;
			cout << "2-EFECTIVO "<< endl;;
			cout << "3-TARJETA "<< endl;;
	
			cin >> opc3;
				system("cls");	
	     do
			{
			switch (opc3){	
				case 1:
					
					ahorro-=pago;
					system("pause");
		
					break;
					
				case 2:
			
					efectivo-=pago; 
					system("pause");
				 
				    
					break;
					
				case 3:
			
					tarjeta-=pago;
					system("pause");
				
					break;
					
				case 4:
					break;
					
					break;	
					
					
				}
		} while (opc3 != 4);
}	

//ingreso de dinero
void ingresos(){
	
	cout<<"INGRESE CANTIDAD DE DINERO QUE DESEA  : ";
	cin>>abono;
  	cout<<"1-EFECTIVO "<<endl;
  	cout<<"2-TARJETA: "<<endl;
  	cout<<"3-AHORRO "<<endl;
  	cout<<"4-SALIR "<<endl;
  	cin>>opc2;
  	switch(opc2)
  	{
  	   case 1:
  	   	      efectivo=efectivo+abono; 
  	   	      cout<<" saldo en efectivo es: "<< efectivo;
  	   	      cout<<endl;
		    break;
			
	  case 2:
	  	   tarjeta=tarjeta+abono;
	  	   cout<<endl;
	       break;	
	    case 3:
	    	ahorro=ahorro+abono;
	    
	  	   cout<<endl;
	    	break;
	    	case 4:
	    	     break;
	    		break;
	     case 5:
	     	cout<<"NO CORRESPONE INTENTE DE NUEVO"<<endl;
	     	break;  		
    }

  	
  }
	
  
	


int main() {
		//cambia color de letra y fondo 
	system("color 0a");

  	
	    	cout << "---------------------------------------------------\n" ;
		cout << "---------********BIENBENIDO*******----------------- \n";
		cout << "---------------------------------------------------\n"	;
		cout << endl;        
				//MENU PRICIPAR PARA EL CLIENTE 
			do
			{		
				cout << "1-INGRESAR DINERO"<< endl;
				cout << "2-GASTOS "<< endl;
				cout << "3-TRANFERENCIA "<< endl;
				cout << "4-SALDO ACTUAL Y TRAMITES REALISADOS"<< endl;
				cout << "5-SALIR \n" << endl;
				cout << "--------------------------------------------\n";
				cin >> opc;
	         
				system("cls");

	
			switch (opc){	
				case 1:
				ingresos();
			system("pause");
		    system ("cls");
				    break;
				case 2:
				pagos();
			system("pause");
		    system ("cls");
					break;
				case 3:
					break;	
				case 4:
			  saldos_toales();
			system("pause");
		    system ("cls");
				break;	
				 case 5:
				 break;
				 break;
				 	
				}
	} while (opc2 != 5);
		
	
	return 0;
}
