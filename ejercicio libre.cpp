//calculadora de interes simple

#include <iostream>
 
using namespace std;
 
int main() {
    double cantidadPrincipal, tasaInteres, periodo;
     
    cout << "Calculadora de Inter�s Simple" << endl;
     
    cout << "Ingrese la cantidad principal: ";
    cin >> cantidadPrincipal;
     
    cout << "Ingrese la tasa de interes (%): ";
    cin >> tasaInteres;
     
    cout << "Ingrese el periodo (a�os): ";
    cin >> periodo;
 
    // Calcula el inter�s simple
    double interesSimple = (cantidadPrincipal * tasaInteres * periodo) / 100;
 
    cout << "El inter�s simple es: " << interesSimple << endl;
 
    return 0;
}
