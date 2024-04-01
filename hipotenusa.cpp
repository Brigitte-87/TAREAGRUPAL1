#include <iostream>
#include <math.h>
using namespace std; 
main(){
	float hipotenusa, catetoA,catetoB;
	
	cout<<"ingrese el valor del cateto A: ";
	cin>>catetoA;
	cout<<"ingrese el valor del cateto B: ";
	cin>>catetoB;
	
	catetoA= pow(catetoA,2);
	catetoB= pow(catetoB,2);
	
	hipotenusa= sqrt (catetoA+catetoB);
	cout<<"El valor de la hipotenusa es: "<<hipotenusa<<endl;
	
	system("pause");
}