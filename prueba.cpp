#include <iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int tarjeta=0,efectivo=0,ahorro=0,pago=0,abono=0,gasta=0;
int comp=0,comp2=0,comp3=0,comp4=0;
int ingreso,opc,opc2,opc3,contador;
string compra;


//saldos totales 
void saldos_toales(){
	
	cout<<"******************************************* "<<endl;
    cout<<"********** SALDOS************ "<<endl;
    cout<<"tranferencuas realisadas "<< contador<<endl;
    cout<<"SALDO EFECTIVO "<<efectivo <<endl;
    cout<<"SALDO EN TARJETA : "<<tarjeta<<endl;
    cout<<"SALDO DE AHORROS "<<ahorro<<endl;
    cout << "GASTO DE AGUA " <<comp3 <<endl;
    cout << "GASTO DE luz  " <<comp2 <<endl;
    cout << "GASTO DE COMIDA  " <<comp <<endl;
    cout << "GASTO EN OTROS  " <<comp4 <<endl;
    cout<<"GASTOS TOTALES  : "<<gasta<<endl;
    cout<<"******************************************* "<<endl;	
}


void realiso (){
	if (compra == "comida " ){
	comp+= pago;
	}
	else if (compra == "luz "){
		comp2+=pago;
	} 
 if (compra == "agua "){
	 	comp3+=pago;
	 	}
	 	else 
	 	comp4+=pago ;
} 

// realisar pagos 
void pagos(){

	 cout<< "INGRESE CANTIDAD A PAGAR \n";
	 cin >> pago;
	
	 cout<< endl;
	cout << "********FORMA DE PAGO********  \n";
			cout << "1-EFECTIVO"<< endl;;
			cout << "2-TARJETA "<< endl;;
			cout << "3-AHORRO "<< endl;;
			cin >> opc3;
			switch (opc3)
			
			{	
				case 1:
					efectivo=efectivo-pago; 
				
					break;
				case 2:
					tarjeta=tarjeta -pago;
					break;
				case 3:
				
					ahorro=ahorro-pago;
					break;
				case 4:
					break;
					break;	
					
					
				} 
		gasta=gasta+pago;
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
		    break;
	  case 2:
	  	   tarjeta=tarjeta+abono;
	       break;	
	    case 3:
	    	ahorro=ahorro+abono;
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
			 cout<<" CONSEPTO DE PAGO ";
	          cin >> compra;
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
