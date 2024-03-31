//calculadora de interes simple

#include <iostream>
 
using namespace std;
 
int main() {
    double cantidadPrincipal, tasaInteres, periodo;
     
    cout << "Calculadora de Interés Simple" << endl;
     
    cout << "Ingrese la cantidad principal: ";
    cin >> cantidadPrincipal;
     
    cout << "Ingrese la tasa de interes (%): ";
    cin >> tasaInteres;
     
    cout << "Ingrese el periodo (años): ";
    cin >> periodo;
 
    // Calcula el interés simple
    double interesSimple = (cantidadPrincipal * tasaInteres * periodo) / 100;
 
    cout << "El interés simple es: " << interesSimple << endl;
 
    return 0;
}
