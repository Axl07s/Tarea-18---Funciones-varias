// Nombre: Axel Molineros
// Fecha: 2024-07-13
// 4) Una función recibe como parámetro un vector de enteros.
// La función debe determinar si cada uno de estos elementos es primo o no.
// La función debe devolver la sumatoria de los números primos que se encontraron en el vector.

#include <iostream>

bool VectorPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int sumaPrimos(int vector[], int size) {
    int suma = 0;

    for (int i = 0; i < size; i++) {
        if (VectorPrimo(vector[i])) {
            suma += vector[i];
        }
    }

    return suma;
}

void determinarPrimos(int vector[], int size) {
    for (int i = 0; i < size; i++) {
        if (VectorPrimo(vector[i])) {
            std::cout << vector[i] << " es primo." << std::endl;
        } else {
            std::cout << vector[i] << " no es primo." << std::endl;
        }
    }
}

// Ejemplo de uso
int main() {
    int vector[] = {2, 5, 1, 9, 65, 37, 28, 19, 20};
    int size = sizeof(vector) / sizeof(vector[0]);

    int suma = sumaPrimos(vector, size);
    std::cout << "Sumatoria de números primos: " << suma << std::endl;

    std::cout << "Determinación de números primos en los elementos del vector:" << std::endl;
    determinarPrimos(vector, size);

    return 0;
}