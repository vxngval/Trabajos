#include <iostream>
#include <limits>

int main() {
    
    int numero;
    int contador = 0;
    int suma = 0;
    int maximo = std::numeric_limits<int>::min(); 
    int minimo = std::numeric_limits<int>::max();

    std::cout<<"Ingrese n�meros para calcular el m�ximo, el m�nimo y el promedio.";
    std::cout<<"Ingrese un n�mero negativo para terminar.";

    while (true) {
        std::cout<<"Ingrese un n�mero: ";
        std::cin>>numero;

        if (numero < 0) {
            break;
        }

        contador++;
        suma += numero;

        if (numero > maximo) {
            maximo = numero;
        }

        if (numero < minimo) {
            minimo = numero;
        }
    }

    if (contador > 0) {
        double promedio = static_cast<double>(suma) / contador;

        std::cout << "Resultados:" << std::endl;
        std::cout << "M�ximo: " << maximo << std::endl;
        std::cout << "M�nimo: " << minimo << std::endl;
        std::cout << "Promedio: " << promedio << std::endl;
        
    } else {
        std::cout<<"No se ingresaron n�meros.";
    }

    return 0;
}
