#include <iostream>

using namespace std;

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
        cout << "No es posible sacar raíces de números negativos, ingresa un número válido por favor" << endl;
        return 0.0;
    }
    double n = numero;
    double aproximacion = 0.000001;
    while (true) {
        double n2 = 0.5 * (n + numero / n);
        if (abs(n2 - n) < aproximacion) {
            return n2;
        }
        n = n2;
    }
}

int main() {
    char opcion;
    do {
        cout << "Hola, elige una opción" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicación" << endl;
        cout << "4. División" << endl;
        cout << "5. Potencia" << endl;
        cout << "6. Raíz" << endl;
        cout << "7. Salir" << endl;
        cin >> opcion;

        switch (opcion) {
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6': {
                double num1, num2;
                cout << "Dame el primer número: ";
                cin >> num1;
                if (opcion != '6') {
                    cout << "Dame el segundo número: ";
                    cin >> num2;
                }
                double resultado;
                if (opcion == '1') {
                    resultado = suma(num1, num2);
                } else if (opcion == '2') {
                    resultado = resta(num1, num2);
                } else if (opcion == '3') {
                    resultado = multiplicacion(num1, num2);
                } else if (opcion == '4') {
                    resultado = division(num1, num2);
                } else if (opcion == '5') {
                    int exponente;
                    cout << "¿A qué exponente deseas elevar? ";
                    cin >> exponente;
                    resultado = potencia(num1, exponente);
                } else if (opcion == '6') {
                    resultado = raiz(num1);
                }
                cout << "Tu resultado es: " << resultado << endl;
                break;
            }
            case '7':
                cout << "¡Adiós!" << endl;
                break;
            default:
                cout << "Ingresa una opción válida por favor" << endl;
        }
    } while (opcion != '7');

    return 0;
}
