#include <stdio.h>
#include <math.h>

double suma(double num1, double num2) {
    return num1 + num2;
}

double resta(double num1, double num2) {
    return num1 - num2;
}

double multiplicacion(double num1, double num2) {
    return num1 * num2;
}

double division(double num1, double num2) {
    return num1 / num2;
}

double potencia(double base, double exponente) {
    double resultado = 1.0;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

double raiz(double numero) {
    if (numero < 0) {
        printf("No es posible obtener raíces de números negativos.\n");
        return 0.0;
    }
    double n = numero;
    double aproximacion = 0.000001;
    while (1) {
        double n2 = 0.5 * (n + numero / n);
        if (fabs(n2 - n) < aproximacion) {
            return n2;
        }
        n = n2;
    }
}

int main() {
    char opcion;
    do {
        printf("Hola, elige una opción:\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicación\n");
        printf("4. División\n");
        printf("5. Potencia\n");
        printf("6. Raíz\n");
        printf("7. Salir\n");
        scanf(" %c", &opcion);

        switch (opcion) {
            case '1':
            case '2':
            case '3':
            case '4': {
                double num1, num2;
                printf("Dame el primer número:\n");
                scanf("%lf", &num1);
                printf("Dame el segundo número:\n");
                scanf("%lf", &num2);
                double resultado;
                if (opcion == '1') {
                    resultado = suma(num1, num2);
                } else if (opcion == '2') {
                    resultado = resta(num1, num2);
                } else if (opcion == '3') {
                    resultado = multiplicacion(num1, num2);
                } else if (opcion == '4') {
                    resultado = division(num1, num2);
                }
                printf("Tu resultado es: %lf\n", resultado);
                break;
            }
            case '5': {
                double num1;
                int exponente;
                printf("Dame el número base:\n");
                scanf("%lf", &num1);
                printf("¿A qué exponente deseas elevar?\n");
                scanf("%d", &exponente);
                double resultado = potencia(num1, exponente);
                printf("Tu resultado es: %lf\n", resultado);
                break;
            }
            case '6': {
                double num1;
                printf("Dame el número para calcular la raíz:\n");
                scanf("%lf", &num1);
                double resultado = raiz(num1);
                printf("Tu resultado es: %lf\n", resultado);
                break;
            }
            case '7':
                printf("¡Adiós!\n");
                break;
            default:
                printf("Ingresa una opción válida por favor.\n");
        }
    } while (opcion != '7');
    return 0;
}
