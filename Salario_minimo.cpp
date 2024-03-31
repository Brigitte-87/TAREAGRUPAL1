#include <iostream> 
#include <stdlib.h> 
#include <string> 
using namespace std;
float q1,q2,s;
string q;
int main()
{
	cout <<"Salario minimo"<<endl;
	cout <<"ingrese el nombre del empleado: " ;
	getline(cin,q);
	cout<<"Ingrese pago primera quincena del mes"<<endl;
	cin>>q1;
	cout<<"Ingrese pago segunda quincena del mes"<<endl;
	cin>>q2;
	s=q1+q2;
	if (s>=3000){
		cout<<"Excelente:"<< q <<endl;
		cout<<"Gana el salario minimo o mas: Q"<< s <<endl;
	}
	else {
		cout<<"Alerta:"<<q<<endl;
		cout<<"No Gana el salario minimo: Q" << s <<endl;
	}
	int s;
	s=750;
	while(s<=3000){
		cout<<"Recomendado semanal: "<<endl;
		cout<<s<<endl;
		s=s+750;
	}
	return 0;
	}