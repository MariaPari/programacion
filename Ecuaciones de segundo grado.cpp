/*Programa que resuelve una ecuacion cuadratica de la forma: Ax^2 + Bx + C = 0. */
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main(){
	int A,B,C;
	double x1,x2,discriminante;
	cout<<"\tBienvenid@ estimad@"<<endl;
	cout<<"En esta ocacion se resolvera una ecuacion cuadratica de la forma: Ax^2 + Bx + C = 0 "<<endl;
	cout<<"Para lo cual sea tan amable de completar lo siguiente: "<<endl<<endl;
	cout<<"Por favor digite el valor de A: ";cin>>A;
	cout<<"Por favor digite el valor de B: ";cin>>B;
	cout<<"Por favor digite el valor de C: ";cin>>C;
	discriminante = pow(B,2)-4*A*C;
	if(discriminante>0){
		x1= (-B+sqrt(pow(B,2)-4*A*C))/(2*A);
		x2= (-B-sqrt(pow(B,2)-4*A*C))/(2*A);
		cout<<"\nLas soluciones son: "<<endl;
		cout<<"x1 = "<<x1<<endl;
		cout<<"x2 = "<<x2<<endl;
		cout<<"Como se observa las raices son reales y diferentes."<<endl<<endl;
	}
	else if(discriminante==0){
		x1= (-B+sqrt(pow(B,2)-4*A*C))/(2*A);
		x2= (-B-sqrt(pow(B,2)-4*A*C))/(2*A);
		cout<<"\nLas soluciones son: "<<endl;
		cout<<"x1 = "<<x1<<endl;
		cout<<"x2 = "<<x2<<endl;
		cout<<"Como se observa las raices son reales e iguales."<<endl<<endl;
		}
		else{
			cout<<"\nLas raices son complejas y conjugadas. "<<endl<<endl;
		}
	system("pause");
	return 0;
}
