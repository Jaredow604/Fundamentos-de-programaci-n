#include <stdio.h>

int main() {
    double numero;
    
    printf("Ingrese un número: ");
    scanf("%lf", &numero);
    
    double cuadrado = numero * numero;
    double cubo = numero * numero * numero;
    
    printf("El cuadrado de %.2lf es %.2lf\n", numero, cuadrado);
    printf("El cubo de %.2lf es %.2lf\n", numero, cubo);
    
    return 0;
}