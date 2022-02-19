//Programa que resuelve algunas de las funciones principales de la serie de Taylor y Maclaurin.
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main(){
	int opc,factorial;
	double x,cant,contador;
	//opc = opcion
	//cant = cantidad
	cout<<"\tBienvenid@ estimad@"<<endl;
	cout<<"\nEn esta ocasion resolveremos algunas de las principales funciones de la serie de Taylor y Maclaurin."<<endl;
	cout<<"Para lo cual sea tan amable de escoger una de las siguientes opciones:"<<endl;
	cout<<"\n1. Serie de la funcion exponencial: e^x"<<endl;
	cout<<"2. Serie geometrica: 1/(1-x)"<<endl;
	cout<<"3. Serie de la funcion logaritmica: Log(1+x)"<<endl;
	cout<<"4. Salir";
	cout<<"\nOpcion: ";cin>>opc;
	switch(opc){ //Analizando la opcion escogida por el usuari@.
		case 1:
	      contador = 1;
     	  factorial = 1;
	      cout<<"Por favor digite el valor de x: ";cin>>x;
	      cout<<"Por favor digite la cantidad de terminos a sumarse: ";cin>>cant;	
	      for(int i=1;i<cant;i++){
		  factorial=factorial*i;
	      contador=contador+(pow(x,i))/(factorial);	
	      } 
	      cout<<"e^"<<x<<" = "<<contador<<endl;break;
		case 2:
	      contador =1;
	      cout<<"Por favor digite la cantidad de terminos a sumarse: ";cin>>cant;
	      // Para la serie geometrica debe cumplirse: |x|<1 .
	      do{
	      	cout<<"Por favor digite el valor de x(-1<x<1): ";cin>>x;
		  }while ((sqrt(pow(x,2))>-1) && (sqrt(pow(x,2))>1) or (sqrt(pow(x,2))==1)); // Restringiendo el valor de x.
		  if(x>=0){
		  	for(int i=1;i<cant;i++){
		    contador = contador + pow(x,i);
	        }
	        cout<<"1/(1-"<<x<<") = "<<contador<<endl;break;
		  }
		  else{
		  	for(int i=1;i<cant;i++){
		    contador = contador + pow(x,i);
	        }
	        cout<<"1/(1+"<<sqrt(pow(x,2))<<") = "<<contador<<endl;break;
		  }
		case 3:
	      cout<<"Por favor digite la cantidad de terminos a sumarse: ";cin>>cant;
	      // Para la serie logaritmica debe cumplirse: |x|<1 .
	      do{
	      	cout<<"Por favor digite el valor de x(-1<x<1): ";cin>>x;
		  }while((sqrt(pow(x,2))>-1) && (sqrt(pow(x,2))>1) or (sqrt(pow(x,2))==1)); // Restringiendo el valor de x.
	      contador=x;
		  if(x>=0){
		  	for(int i=1;i<cant;i++){
		    contador = contador + (pow(-1,i)*pow(x,i+1))/(i+1);
	        }
	        cout<<"Log(1+"<<x<<") = "<<contador<<endl;break;
		  }
		  else{
		  	for(int i=1;i<cant;i++){
		    contador = contador + (pow(-1,i)*pow(x,i+1))/(i+1);
	        }
	        cout<<"Log(1-"<<sqrt(pow(x,2))<<") = "<<contador<<endl;break;
		  }	
	    case 4:
	      break;
	    default:
	      cout<<"\nOpcion no existente"<<endl;break;
	      }
	system("pause");
	return 0;
}
