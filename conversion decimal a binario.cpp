#include <iostream>
using namespace std;

void convertir_a_Decimal_a_Binario(int decimal) {
    int binario[32];
    int i = 0;

    while (decimal > 0) {
        binario[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << binario[j];
    }
    cout << endl;
}

int main() {
    int decimal;
    cout << "Introduce el numero decimal: ";
    cin >> decimal;
    cout << "Representacion a binario: ";
    convertir_a_Decimal_a_Binario(decimal);
    return 0;
}