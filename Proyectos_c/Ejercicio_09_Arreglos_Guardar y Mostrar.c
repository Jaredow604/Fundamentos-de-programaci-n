#include <stdio.h>

int main() {
    const int numerodedatos = 5;
    char nombres[numerodedatos][100];
    int enteros[numerodedatos];
    float floats[numerodedatos];

    for (int i = 0; i < numerodedatos; i++) {
        printf("Ingresa el nombre %d: ", i + 1);
        scanf("%s", nombres[i]);
    }

    for (int i = 0; i < numerodedatos; i++) {
        printf("Ingresa un número con decimales %d: ", i + 1);
        scanf("%f", &floats[i]);
    }

    for (int i = 0; i < numerodedatos; i++) {
        printf("Ingresa un número entero %d: ", i + 1);
        scanf("%d", &enteros[i]);
    }

    printf("Nombres ingresados\n");
    for (int i = 0; i < numerodedatos; i++) {
        printf("%s\n", nombres[i]);
    }

    printf("Números con decimales ingresados\n");
    for (int i = 0; i < numerodedatos; i++) {
        printf("%f\n", floats[i]);
    }

    printf("Números enteros ingresados\n");
    for (int i = 0; i < numerodedatos; i++) {
        printf("%d\n", enteros[i]);
    }

    return 0;
}