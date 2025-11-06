#include <stdio.h>
#include <assert.h>

int suma(int a, int b);

int main() {
    // Suma de dos positivos
    assert(suma(5, 7) == 12);
    // Suma de un negativo y un positivo
    assert(suma(-3, 3) == 0);
    // Suma de dos negativos
    assert(suma(-5, -7) == -12);

    return 0;
}