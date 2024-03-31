#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Ingresa el primer número: ";
    cin >> num1;

    cout << "Ingresa el segundo número: ";
    cin >> num2;

    cout << "Multiplicación: " << num1 * num2 << endl;
    cout << "Suma: " << num1 + num2 << endl;
    cout << "Resta: " << num1 - num2 << endl;

    if (num2 != 0) {
        cout << "División: " << static_cast<float>(num1) / num2 << endl;  // Se convierte uno de los números a float para obtener la división decimal
    } else {
        cout << "No es posible dividir entre cero." << endl;
    }

    return 0;
}