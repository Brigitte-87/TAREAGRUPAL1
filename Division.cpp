#include <iostream>

int main()
 {
    int dividendo, divisor;
    
    std::cout << "Ingrese el dividendo: ";
    std::cin >> dividendo;
    
    std::cout << "Ingrese el divisor: ";
    std::cin >> divisor;
    
    if (divisor != 0) {
        int cociente = dividendo / divisor;
        int residuo = dividendo % divisor;
        
        std::cout << "Cociente: " << cociente << std::endl;
        std::cout << "Residuo: " << residuo << std::endl;
    } else {
        std::cout << "No se puede dividir por cero." << std::endl;
    }
    
    return 0;
}