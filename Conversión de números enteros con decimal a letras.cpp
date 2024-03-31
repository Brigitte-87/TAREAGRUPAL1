//Conversi�n de n�meros enteros con decimal a letras

#include <iostream>
#include <string>
using namespace std;

// Arreglos para representar las palabras correspondientes a los n�meros
string unidades[] = {"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "diecis�is", "diecisiete", "dieciocho", "diecinueve"};
string decenas[] = {"", "", "veinti", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};

// Funci�n para convertir un n�mero entero a letras
string convertirEnteroALetras(int numero) {
    if (numero < 10) {
        return unidades[numero];
    } else if (numero < 20) {
        return especiales[numero - 10];
    } else {
        int unidad = numero % 10;
        if (unidad == 0) {
            return decenas[numero / 10];
        } else {
            return decenas[numero / 10] + " y " + unidades[numero % 10];
        }
    }
}

int main() {
    double numero;
    cout << "Ingrese un numero con parte decimal: ";
    cin >> numero;

    int parte_entera = static_cast<int>(numero);
    int parte_decimal = static_cast<int>((numero - parte_entera) * 100);

    // Convertir la parte entera a letras
    string letras_enteras = convertirEnteroALetras(parte_entera);

    // Convertir la parte decimal a letras
    string letras_decimales;
    if (parte_decimal > 0) {
        letras_decimales = " punto " + unidades[parte_decimal / 10] + unidades[parte_decimal % 10];
    }

    // Imprimir el resultado
    cout << "El n�mero " << numero << " en letras es: " << letras_enteras << letras_decimales << endl;

    return 0;
}

