#include <iostream>
#include <string>
using namespace std;
int main() {
    int x;
    string ones[] = {"uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string teens[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
    string tens[] = {"", "", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};

    cout << "Ingrese un número entre 0 y 999: ";
    cin >> x;

    if (x >= 100) {
        cout << ones[x/100] << " cien";
        x = x % 100;
    }

    if (x > 0) {
        if (x >= 30) {
            cout << tens[x/10];
            x = x % 10;
        } else if (x >= 20) {
            cout << teens[x-20];
            x = 0;
        } else {
         cout << ones[x];
        }
    }

    cout <<endl;
    cin.ignore();
    return 0;
}