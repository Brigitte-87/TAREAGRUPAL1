#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	for(int tabla =1; tabla <= 10; tabla++){
		cout<<endl;
		cout<<"\nTABLA DEL  "<< tabla <<endl;
		for(int i=1; i<=10; i++){
			cout<< tabla <<" * "<< i <<" = "<< tabla * i <<endl;
		}
	}
	return 0;
}
