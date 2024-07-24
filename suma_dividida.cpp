// Nombre: Axel Molineros
// Fecha: 2024-07-13
// 3) Diseñe la función que suma las posiciones(índice) pares del vector y el resultado final lo multiplica por 100. 
// Las posiciones impares del vector primero las multiplica por 2 y luego las suma.
// La función debe devolver la división de las 2 sumatorias realizadas previamente.

#include <iostream>

double VecsumaDividida(int vector[], int size) {
    int sumaPares = 0;
    int sumaImpares = 0;

    for (int i = 0; i < size; i++) {
        if (vector[i] % 2 == 0) {  // Elementos pares
            sumaPares += vector[i];
        } else {  // Elementos impares
            sumaImpares += vector[i] * 2;
        }
    }

    // Multiplicar la suma de elementos pares por 100
    sumaPares *= 100;

    // Devolver la división de ambas sumatorias
    // Nota: Asegurarse de que sumaImpares no sea cero para evitar división por cero
    if (sumaImpares == 0) {
        std::cerr << "Error: División por cero." << std::endl;
        return 0.0;
    }

    return static_cast<double>(sumaPares) / sumaImpares;
}


int main() {
    int vector[] = {8, 4, 3, 21, 7, 10};  // Elementos de las posiciones par y impar
    int size = sizeof(vector) / sizeof(vector[0]);

    double resultado = VecsumaDividida(vector, size);
    std::cout << "Resultado de la división de las dos sumatorias: " << resultado << std::endl;

    return 0;
}
