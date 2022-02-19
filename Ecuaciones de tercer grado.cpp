/*Programa que resuelve una ecuacion cubica de la forma: Ax^3 + Bx^2 + Cx + D = 0.*/
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main(){
	int A1,B1,C1,D1; 
	double a,b,c,p,q,delta,x,m,n,a2,b2,c2,x2,x3,discriminante;
	cout<<"\tBienvenid@ estimad@"<<endl;
	cout<<"En esta ocasion resolveremos una ecuacion cubica de la forma: A1x^3 + B1x^2 + C1x + D1=0"<<endl;
	cout<<"Para lo cual sea tan amable de completar lo siguiente: "<<endl<<endl;
	cout<<"Por favor digite el valor de A1: ";cin>>A1;
	cout<<"Por favor digite el valor de B1: ";cin>>B1;
	cout<<"Por favor digite el valor de C1: ";cin>>C1;
	cout<<"Por favor digite el valor de D1: ";cin>>D1;
	/*Hallamos la primera raiz con el METODO DE CARDANO para
	  que la ecuacion cubica se vuelva en una cuadratica. */
	a=B1/A1;
	b=C1/A1;
	c=D1/A1;
	p=(3*b-pow(a,2))/(3);
	q=(2*pow(a,3)-9*a*b+27*c)/(27);
	m = q/2;
	n = p/3;
	delta=pow(m,2)+pow(n,3);
	x= cbrt(-m+sqrt(delta))+cbrt(-m-sqrt(delta))-(a/3);
	/*Tras calcular la primera raiz, hallamos los coeficientes
	  de la ecuacion cuadratica: a2x^2 + b2x + c2 = 0. */
	a2=1;
	b2=(a2*x)+a;
	c2=(b2*x)+b;
	discriminante = pow(b2,2)-4*a2*c2;
	if(discriminante>=0){ 
	    /* Como se cumple la condicion, las raices seran 
		   reales, diferentes o iguales. */
		x2=(-b2+sqrt(pow(b2,2)-4*a2*c2))/(2*a2);
	    x3=(-b2-sqrt(pow(b2,2)-4*a2*c2))/(2*a2);
	    cout<<"\nLas soluciones son: "<<endl;
	    cout<<"x1 = "<<x<<endl;
	    cout<<"x2 = "<<x2<<endl;
	    cout<<"x3 = "<<x3<<endl<<endl;
	}
	else{
		/*Como no se cumple la condicion, las raices seran
		  raices complejas. */
		cout<<"\nLas soluciones son: "<<endl;
		cout<<"x1 = "<<x<<endl;
		cout<<"x2 y x3 tienen raices complejas."<<endl<<endl;
	}
	system("pause");
	return 0;
}
