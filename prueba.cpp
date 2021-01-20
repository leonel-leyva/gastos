#include <iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int tarjeta=0,efectivo=0,ahorro=0,pago=0,abono=0,gasta=0,total=0;
int comp=0,comp2=0,comp3=0,comp4=0,tranfiere=0,saldo1=0;
int ing=0,ing2=0,ing3=0,ing4=0;
int ingreso,opc,opc2,opc3,ope4,ope5,contador,cuenta,cuenta2;

//saldos totales 
void saldos_toales(){
	saldo1=efectivo+tarjeta+ahorro;
	cout<<endl;
	cout<<"TRANSACCIONES REALISADASA :"<< contador<<endl;
	cout<<endl;
    cout<<"********** SALDOS EN CUENTA  ************ "<<endl;
    cout<<"SALDO EFECTIVO:        "<<efectivo <<endl;
    cout<<"SALDO EN TARJETA:      "<<tarjeta<<endl;
    cout<<"SALDO DE AHORROS:      "<<ahorro<<endl;
    cout<<"                    ________ "<<endl;
    cout<<"SALDO TOTALES:         "<<saldo1<<endl;
    cout<<endl;
    cout<<"********** CONSEPTO DE ENTRADAS REALISADAS  ************ "<<endl;
   	cout << "NOMINA/TRABAJO:            "<<ing<< endl;
	cout << "PRESTAMO:                  "<<ing2<<endl;
	cout << "TRABAJOS EXTRAS:           "<<ing3<< endl;
	cout << "VENTAS:                    "<<ing4<<endl;
	cout<<"                        ________ "<<endl;
    cout<<"INGRESOS TOTALES:          "<<total<<endl;
    cout<<endl;
    cout<<"********** PAGOS REALISADOS************ "<<endl;
    cout << "GASTO DE AGUA:       " <<comp3 <<endl;
    cout << "GASTO DE luz:        " <<comp2 <<endl;
    cout << "GASTO DE COMIDA:     " <<comp <<endl;
    cout << "GASTO EN OTROS:      " <<comp4 <<endl;
    	cout<<"                  ________ "<<endl;
    cout<<"GASTOS TOTALES:      "<<gasta<<endl;
    
}
//tranferencia de cuenta a cuenta  
void tranferencias (){
	cout<< endl;
	cout << "CUENTA DE LA QUE DESEA TRANFERIR   \n";
	cout<< endl;
	cout << "1-EFECTIVO"<< endl;
	cout << "2-TARJETA "<< endl;
	cout << "3-AHORRO "<< endl;
	cin>> cuenta;
	
	system("cls");
	cout<<"INGRESE CUENTA A TRANFERIR \n ";
	cout<< endl;
	cout << "1-EFECTIVO"<< endl;
	cout << "2-TARJETA "<< endl;
	cout << "3-AHORRO "<< endl;
	cin>> cuenta2;
	cout<<endl;
	
	 if ((cuenta==1 and cuenta2==1) || (cuenta==2 and cuenta2==2) || (cuenta==3 and cuenta2==3)) {
	 	cout<< endl;
	 	cout<<"!!!!!NO PUEDES TRANFERER A LA MISMA CUENTA!!!!  "<<endl;
	 	cout<< endl;
	 }

	  if (cuenta==1 && cuenta2==2){
	 	cout<<"INGRESE LA CANTIDAD A TRANFERIR ";
	    cin>> tranfiere;  	
	  	  if (efectivo < tranfiere )
			{
	  		cout<<"NO TIENES SUFICIENTE DINERO PARA TRANFERIR DE CUENTA A CUENTA "<<endl;
	    	}
	  		else {
	  			
	  			efectivo-=tranfiere ;
	            tarjeta+=tranfiere ;
			  }
		  }
		  //tranferencia 1 de 2 
		  	  if (cuenta==1 && cuenta2==3){
	  		cout<<"INGRESE LA CANTIDAD A TRANFERIR ";
	        cin>> tranfiere; 
	  	  if (efectivo < tranfiere )
			{
	  		cout<<"NO TIENES SUFICIENTE DINERO PARA TRANFERIR DE CUENTA A CUENTA "<<endl;
	    	}
	  		else {
	  			
	  			efectivo-=tranfiere ;
	            ahorro+=tranfiere ;
			  }
		  }
    //tranferencia 1 de2 
    if (cuenta==2 && cuenta2==1){
    		cout<<"INGRESE LA CANTIDAD A TRANFERIR ";
	        cin>> tranfiere; 
	  	  if (tarjeta < tranfiere )
			{
	  		cout<<"NO TIENES SUFICIENTE DINERO PARA TRANFERIR DE CUENTA A CUENTA "<<endl;
	    	}
	  		else {
	  			
	  			tarjeta-=tranfiere ;
	            efectivo+=tranfiere ;
			  }
		  }
		  //tranferencia 2 de 2 
		  	  if (cuenta==2 && cuenta2==3){
	  		cout<<"INGRESE LA CANTIDAD A TRANFERIR ";
	        cin>> tranfiere; 
	  	  if (tarjeta  < tranfiere )
			{
	  		cout<<"NO TIENES SUFICIENTE DINERO PARA TRANFERIR DE CUENTA A CUENTA "<<endl;
	    	}
	  		else {
	  			efectivo-=tranfiere ;
	            ahorro+=tranfiere ;
			  }
		  }
	//tranferencia 1 de 3
	if (cuenta==3 && cuenta2==1){
	  		cout<<"INGRESE LA CANTIDAD A TRANFERIR ";
	        cin>> tranfiere; 
	  	  if (ahorro < tranfiere )
			{
	  		cout<<"NO TIENES SUFICIENTE DINERO PARA TRANFERIR DE CUENTA A CUENTA "<<endl;
	    	}
	  		else {
	  			
	  			ahorro-=tranfiere ;
	            efectivo+=tranfiere ;
			  }
		  }
		  //tranferencia 1 de 2 
		  	  if (cuenta==3 && cuenta2==2){
	  		cout<<"INGRESE LA CANTIDAD A TRANFERIR ";
	        cin>> tranfiere; 
	  	  if (ahorro < tranfiere )
			{
	  		cout<<"NO TIENES SUFICIENTE DINERO PARA TRANFERIR DE CUENTA A CUENTA "<<endl;
	    	}
	  		else {
	  			
	  			ahorro-=tranfiere ;
	            tarjeta +=tranfiere ;
			  }
		  }
	 }
// consepto de entrada de dinero 
void ing_registro(){
	 cout<< endl;
	cout << "********PONGA TIPO DE INGRESO ********  \n";
			cout << "1-NOMINA/TRABAJO "<< endl;
			cout << "2-PRESTAMO "<< endl;
			cout << "3-TRABAJOS EXTRAS "<< endl;
			cout << "4-VENTAS"<<endl;
			cin  >> ope5;
			switch (ope5)
			{	
				case 1:
				ing+=abono; 
					break;
				case 2:
				ing2+=abono; 
					break;
				case 3:
				ing3+=abono;
					break;
				case 4:
				ing4+=abono;
				case 5:
					break;
					break;	
				} 
}
//consepto de pagos 
void realiso (){
	 cout<< endl;
	cout << "********CONSEPTO DE PAGO ********  \n";
			cout << "1-COMIDA "<< endl;
			cout << "2-LUZ "<< endl;
			cout << "3-AGUAN "<< endl;
			cout << "4-OTROS GASTOS"<<endl;
			cin  >> ope4;
			switch (ope4)
			{	
				case 1:
				comp+=pago; 
					break;
				case 2:
				comp2+=pago; 
					break;
				case 3:
				comp3+=pago;
					break;
				case 4:
				comp4+=pago;
				case 5:
					break;
					break;	
				} 
} 

// realisar pagos 
void pagos(){
     cout<< endl;
	 cout<< "INGRESE CANTIDAD A PAGAR \n";
	 cin >> pago;
	
	 cout<< endl;
	cout << "********FORMA DE PAGO********  \n";
			cout << "1-EFECTIVO"<< endl;
			cout << "2-TARJETA "<< endl;
			cout << "3-AHORRO "<< endl;
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
	cout<< endl;
	cout<<"INGRESE CANTIDAD DE DINERO QUE DESEA  : ";
	cin>>abono;
	cout<< endl;
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

  	total=total+abono;
  }
	
int main() {
		//cambia color de letra y fondo 
	system("color 0a");
	    cout << "---------------------------------------------------\n" ;
		cout << "---------********BIENVENIDO*******----------------- \n";
		cout << "---------------------------------------------------\n"	;
				//MENU PRICIPAR PARA EL CLIENTE 
			do
			{	
			    cout<< endl;
				cout << "  TECLEE LO QUE DECEA HACER  "<<endl;
				cout<<"**********************************"<<endl;	
				cout<<endl;
				cout << "1-INGRESAR DINERO"<< endl;
				cout << "2-GASTOS "<< endl;
				cout << "3-TRANFERENCIA "<< endl;
				cout << "4-SALDO ACTUAL Y TRAMITES REALISADOS"<< endl;
				cout << "5-SALIR \n" << endl;
				cin >> opc;
				system("cls");
			switch (opc){	
			
				case 1:
				contador+=1;
				ingresos();
				system ("cls");
				ing_registro();
			system("pause");
		    system ("cls");
				    break;
				case 2:
				contador+=1;
				pagos();
				  system ("cls");
				realiso ();
			system("pause");
		    system ("cls");
					break;
				case 3:
					contador+=1;
					tranferencias ();
			system("pause");
		    system ("cls");
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
	} while (opc != 5);	
	return 0;
}
