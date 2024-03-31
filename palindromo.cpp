//#4 Determinar si una palabra o un número es palíndromo.

#include <iostream>

using namespace std;

bool esPalindromo(const string& palabra) {
    int n = palabra.length();
    for (int i = 0; i < n / 2; ++i) {
        if (palabra[i] != palabra[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string entrada;
    cout << "Ingrese su palabra o su nmero: ";
    cin >> entrada;

    cout << (esPalindromo(entrada) ? "Es un palindromo." : "No es un palindromo.") << endl;

    


    system("pause");
}

