#include <stdio.h>

// Funcion de suma de dos parametros
int suma(int a, int b) {
    return a + b;
}

// Funcion de resta de dos parametros
int resta(int a, int b) {
    return a - b;
}

// Funcion de suma de dos parametros
int multiplicacion(int a, int b) {
    return a * b;
}

// Funcion de suma de dos parametros
int division(int a, int b) {
    if (a == 0 || b == 0)
        return 0;

    return a / b;
}

