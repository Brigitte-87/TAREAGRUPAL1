#include <iostream>

using namespace std;

// Función para convertir kilómetros a millas
double kmToMiles(double km) {
    return km * 0.621371;
}

// Función para convertir millas a kilómetros
double milesToKm(double miles) {
    return miles / 0.621371;
}

// Función para convertir metros a pulgadas
double metersToInches(double meters) {
    return meters * 39.3701;
}

// Función para convertir pulgadas a metros
double inchesToMeters(double inches) {
    return inches / 39.3701;
}

// Función para convertir libras a kilogramos
double poundsToKg(double pounds) {
    return pounds * 0.453592;
}

// Función para convertir kilogramos a libras
double kgToPounds(double kg) {
    return kg / 0.453592;
}

int main() {
    double valor;
    
    cout << "------------------- CONVERSIONES ------------------"<< endl;

    // Kilómetros a millas
    cout << "\nIngrese la cantidad de kilometros: ";
    cin >> valor;
    cout << "R//   " << valor << " kilometros son " << kmToMiles(valor) << " millas." << endl;

    // Millas a kilómetros
    cout << "\nIngrese la cantidad de millas: ";
    cin >> valor;
    cout <<  "R//   " << valor << " millas son " << milesToKm(valor) << " kilometros." << endl;

    // Metros a pulgadas
    cout << "\nIngrese la cantidad de metros: ";
    cin >> valor;
    cout <<  "R//   " << valor << " metros son " << metersToInches(valor) << " pulgadas." << endl;

    // Pulgadas a metros
    cout << "\nIngrese la cantidad de pulgadas: ";
    cin >> valor;
    cout <<  "R//   " << valor << " pulgadas son " << inchesToMeters(valor) << " metros." << endl;

    // Libras a kilogramos
    cout << "\nIngrese la cantidad de libras: ";
    cin >> valor;
    cout <<  "R//   " << valor << " libras son " << poundsToKg(valor) << " kilogramos." << endl;

    // Kilogramos a libras
    cout << "\nIngrese la cantidad de kilogramos: ";
    cin >> valor;
    cout <<  "R//   " << valor << " kilogramos son " << kgToPounds(valor) << " libras." << endl;

    return 0;
}


