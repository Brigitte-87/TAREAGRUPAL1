#include <iostream>
using namespace std;
//Tabla de multipicar 
main (){
	int inicio, res;
	
	cout<<"ingrese tabla que desea : " ;
	cin>>inicio;
	
	for(int i=1;i<=10;i++){
		res=inicio * i;
		cout<<inicio<<" x "<<i<<"="<<res<<endl;

	}
		
	system("pause");
}
