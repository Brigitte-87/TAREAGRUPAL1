#include <iostream>
using namespace std;

class CajeroAutomatico {
private:
    float saldo;

public:
    CajeroAutomatico(float saldoInicial) {
        saldo = saldoInicial;
    }

    void consultarSaldo() {
        cout << "Su saldo actual es: Q" << saldo << endl;
    }

    void retirarDinero(float cantidad) {
        if (cantidad > saldo) {
            cout << "Fondos insuficientes" << endl;
        } else {
            saldo -= cantidad;
            cout << "Retiro exitoso. Su saldo actual es: Q" << saldo << endl;
        }
    }
};

int main() {
    CajeroAutomatico cajero(1000); // Saldo inicial de Q1000
    
    while (true) {
        cout << "\n1. Consultar saldo" << endl;
        cout << "2. Retirar dinero" << endl;
        cout << "3. Salir" << endl;
        
        int opcion;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                cajero.consultarSaldo();
                break;
            case 2:
                float cantidad;
                cout << "Ingrese la cantidad a retirar: Q";
                cin >> cantidad;
                cajero.retirarDinero(cantidad);
                break;
            case 3:
                cout << "Gracias por utilizar nuestro cajero automatico." << endl;
                return 0;
            default:
                cout << "Opcion no valida. Por favor, seleccione una opcion correcta." << endl;
        }
    }

return 0;
}