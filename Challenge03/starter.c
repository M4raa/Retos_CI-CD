#include <stdio.h>

// Función para obtener la longitud de una cadena
size_t mi_strlen(const char *s) {
    size_t length = 0;
    while (s[length] != '\0')
        length++;
    return length;
}

// Función para comparar dos cadenas
// Devuelve 0 si son iguales
// Devuelve otro numero si no lo son
int mi_strcmp(const char *s1, const char *s2) {
   
    size_t i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        i++;
    }

    return (unsigned char)s1[i] - (unsigned char)s2[i];    
}

// Función para copiar de una cadena origen a una destino
char *mi_strcpy(char *dest, const char *src) {
    
}