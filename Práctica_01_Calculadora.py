import math

def suma(num1, num2):
    return num1 + num2

def resta(num1, num2):
    return num1 - num2

def multiplicacion(num1, num2):
    return num1 * num2

def division(num1, num2):
    if num2 == 0:
        return "No es posible dividir por cero."
    return num1 / num2

def potencia(base, exponente):
    resultado = 1.0
    for i in range(exponente):
        resultado *= base
    return resultado

def raiz(numero):
    if numero < 0:
        return "No es posible obtener raíces de números negativos."
    n = numero
    aproximacion = 0.000001
    while True:
        n2 = 0.5 * (n + numero / n)
        if abs(n2 - n) < aproximacion:
            return n2
        n = n2

while True:
    print("Hola, elige una opción:")
    print("1. Suma")
    print("2. Resta")
    print("3. Multiplicación")
    print("4. División")
    print("5. Potencia")
    print("6. Raíz")
    print("7. Salir")
    opcion = input()

    if opcion == '7':
        print("¡Adiós!")
        break

    if opcion in ('1', '2', '3', '4'):
        num1 = float(input("Dame el primer número: "))
        num2 = float(input("Dame el segundo número: "))
        if opcion == '1':
            resultado = suma(num1, num2)
        elif opcion == '2':
            resultado = resta(num1, num2)
        elif opcion == '3':
            resultado = multiplicacion(num1, num2)
        elif opcion == '4':
            resultado = division(num1, num2)
        print("Tu resultado es:", resultado)

    elif opcion == '5':
        num1 = float(input("Dame el número base: "))
        exponente = int(input("¿A qué exponente deseas elevar?: "))
        resultado = potencia(num1, exponente)
        print("Tu resultado es:", resultado)

    elif opcion == '6':
        num1 = float(input("Dame el número para calcular la raíz: "))
        resultado = raiz(num1)
        print("Tu resultado es:", resultado)

    else:
        print("Ingresa una opción válida, por favor.")
