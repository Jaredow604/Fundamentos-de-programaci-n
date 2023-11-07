numerodedatos = 5
nombres = ["" for _ in range(numerodedatos)]
enteros = [0 for _ in range(numerodedatos)]
floats = [0.0 for _ in range(numerodedatos)]

for i in range(numerodedatos):
    nombres[i] = input("Ingresa el nombre {}: ".format(i + 1))

for i in range(numerodedatos):
    floats[i] = float(input("Ingresa un número con decimales {}: ".format(i + 1)))

for i in range(numerodedatos):
    enteros[i] = int(input("Ingresa un número entero {}: ".format(i + 1)))

print("Nombres ingresados:")
for nombre in nombres:
    print(nombre)

print("Números con decimales ingresados:")
for numero in floats:
    print(numero)

print("Números enteros ingresados:")
for numero in enteros:
    print(numero)