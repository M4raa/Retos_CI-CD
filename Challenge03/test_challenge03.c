#include <stdio.h>
#include <assert.h>

size_t mi_strlen(const char *s);

int mi_strcmp(const char *s1, const char *s2);

char *mi_strcpy(char *dest, const char *src);

int main() {

    //LONGITUD
    //Normal
    assert(mi_strlen("hola") == 4);
    //Cadena vacía
    assert(mi_strlen("") == 0);

    //COMPARAR
    //Destino vacío
    assert(mi_strcmp("","hola") != 0);
    //Cadenas vacías
    assert(mi_strcmp("","") == 0);
    //Origen vacío
    assert(mi_strcmp("hola","") != 0);
    //Cadenas iguales
    assert(mi_strcmp("hola","hola") == 0);

    //COPIAR
    char buffer1[20];
    char buffer2[5] = "AAAA";
    //Destino vacío
    assert(mi_strcpy(buffer1, "hola") == buffer1);
    assert(mi_strcmp(buffer1, "hola") == 0);
    //Cadenas vacías
    assert(mi_strcpy(buffer1, "") == buffer1);
    assert(mi_strcmp(buffer1, "") == 0);
    //Origen vacío
    assert(mi_strcpy(buffer2, "") == buffer2);
    assert(mi_strcmp(buffer2, "") == 0);
    //Cadenas iguales
    assert(mi_strcpy(buffer1, "test") == buffer1);
    assert(mi_strcmp(buffer1, "test") == 0);
    //Sobreescritura
    assert(mi_strcpy(buffer2, "pepe") == buffer2);
    assert(mi_strcmp(buffer2, "pepe") == 0);

    printf("Test correcto. \n");
    return 0;
}