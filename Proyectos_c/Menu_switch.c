#include <stdio.h>

void cambiarAMinusculas(char *cadena) {
    while (*cadena) {
        if (*cadena >= 'A' && *cadena <= 'Z') {
            *cadena = *cadena + 32; // Cambia a minúscula
        }
        cadena++;
    }
}

void cambiarAMayusculas(char *cadena) {
    while (*cadena) {
        if (*cadena >= 'a' && *cadena <= 'z') {
            *cadena = *cadena - 32; // Cambia a mayúscula
        }
        cadena++;
    }
}

int main() {
    char palabra[100];
    int opcion;

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    printf("Seleccione una opción:\n");
    printf("1. Convertir a mayúsculas\n");
    printf("2. Convertir a minúsculas\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            cambiarAMayusculas(palabra);
            break;
        case 2:
            cambiarAMinusculas(palabra);
            break;
        default:
            printf("Opción no válida\n");
            return 1;
    }

    printf("Palabra convertida: %s\n", palabra);

    return 0;
}