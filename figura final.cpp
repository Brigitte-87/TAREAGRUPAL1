#include <iostream>
#include <cmath>

using namespace std;

void fillSquare(int sideLength) {
    for(int i = 0; i < sideLength; ++i) {
        for(int j = 0; j < sideLength; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

void fillCircle(int radius) {
    int center = radius;
    for (int i = 0; i <= 2 * radius; i++) {
        for (int j = 0; j <= 2 * radius; j++) {
            int d = abs(i - radius) * abs(i - radius) + abs(j - radius) * abs(j - radius);
            if (d < radius * radius) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
}

int main() {
    char choice;
    do {
        cout << "Seleccione la figura a dibujar (A para circulo, B para cuadrado, C para salir): ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 'a':
            case 'A': {
                int radius;
                cout << "Ingrese el radio del circulo: ";
                cin >> radius;
                cout << endl;
                fillCircle(radius);
                break;
            }
            case 'b':
            case 'B': {
                int sideLength;
                cout << "Ingrese la longitud del lado del cuadrado: ";
                cin >> sideLength;
                cout << endl;
                fillSquare(sideLength);
                break;
            }
            case 'c':
            case 'C':
                cout << "Hasta luego";
                break;
            default:
                cout << "Opcion no valida";
        }
        cout << endl;
    } while (choice != 'c' && choice != 'C');
    
	return 0;
}