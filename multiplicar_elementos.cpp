// Nombre: Axel Molineros
// Fecha: 2024-07-13
// 2) Diseñe la función que multiplica todos los elementos del vector por un número que pasa por parámetro.

#include <iostream>

// Función que Multiplica todos los elementos del vector
void multiplicarPorNumero(int vector[], int size, int num) {
    for (int i = 0; i < size; i++) {
        vector[i] *= num;
    }
}


int main() {
    int vector[] = {10, 25, 31, 42, 60}; // Elementos del vector
    int size = sizeof(vector) / sizeof(vector[0]);
    int num = 10;

    multiplicarPorNumero(vector, size, num); // Multiplica los elementos del vector por el parámetro proporcionado

    // Imprime la multiplicación de todos los elementos del vector por el parámetro
    for (int i = 0; i < size; i++) {
        std::cout << vector[i] << " ";
    }

    return 0;
}
