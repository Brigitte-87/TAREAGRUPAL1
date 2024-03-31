#include <iostream>
using namespace std; 
main(){
	int decimal;
	cout<<"ingrese numero decimal: "<<endl;
	cin>>decimal;
	
	int hexadecimal[100];
    int i = 0;
    while(decimal != 0) {
        hexadecimal[i] = decimal % 16;
        decimal = decimal / 16;
        i++;
    }

    cout << "El numero en hexadecimal es: ";
    for(int j = i - 1; j >= 0; j--) {
        if(hexadecimal[j] < 10)
            cout << hexadecimal[j];
        else
            cout << char(hexadecimal[j] + 55)<<endl;	
	}
	
	
	system("pause");
}