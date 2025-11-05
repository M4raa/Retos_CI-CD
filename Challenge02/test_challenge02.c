#include <stdio.h>
#include <assert.h>

// Funcion de suma de dos parametros
int suma(int a, int b);

// Funcion de resta de dos parametros
int resta(int a, int b);

// Funcion de suma de dos parametros
int multiplicacion(int a, int b);

// Funcion de suma de dos parametros
int division(int a, int b);

int main() {
    // Suma de dos positivos
    assert(suma(5, 7) == 12);
    // Suma de un negativo y un positivo
    assert(suma(-3, 3) == 0);
    // Suma de dos negativos
    assert(suma(-5, -7) == -12);

    // Resta de dos positivos
    assert(resta(5, 7) == -2);
    // Resta de un negativo y un positivo
    assert(resta(-3, 3) == -6);
    // Resta de dos negativos
    assert(resta(-5, -7) == 2);

    // Multiplicacion de dos positivos
    assert(multiplicacion(5, 7) == 35);
    // Multiplicacion de un negativo y un positivo
    assert(multiplicacion(-3, 3) == -9);
    // Multiplicacion de dos negativos
    assert(multiplicacion(-5, -7) == 35);


    // Division de dos positivos
    assert(division(25, 5) == 5);
    // Division de un negativo y un positivo
    assert(division(-9, 3) == -3);
    // Division de dos negativos
    assert(division(-25, -5) == 5);
    // Division por cero
    assert(division(5, 0) == 0);

    printf("Funciones definidas exitosamente.\n");
    return 0;
}