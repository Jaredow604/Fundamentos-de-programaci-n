def cambiar_a_minusculas(cadena):
    resultado = ""
    reemplazos = {
        'A': 'a', 'Á': 'á', 'Ä': 'ä', 'E': 'e', 'É': 'é', 'Ë': 'ë', 'I': 'i', 'Í': 'í', 'Ï': 'ï',
        'O': 'o', 'Ó': 'ó', 'Ö': 'ö', 'U': 'u', 'Ú': 'ú', 'Ü': 'ü', 'Ñ': 'ñ'
    }
    
    for char in cadena:
        if char in reemplazos:
            resultado += reemplazos[char]
        elif 'A' <= char <= 'Z':
            resultado += chr(ord(char) + 32)
        else:
            resultado += char
    return resultado

def cambiar_a_mayusculas(cadena):
    resultado = ""
    reemplazos = {
        'a': 'A', 'á': 'Á', 'ä': 'Ä', 'e': 'E', 'é': 'É', 'ë': 'Ë', 'i': 'I', 'í': 'Í', 'ï': 'Ï',
        'o': 'O', 'ó': 'Ó', 'ö': 'Ö', 'u': 'U', 'ú': 'Ú', 'ü': 'Ü', 'ñ': 'Ñ'
    }
    
    for char in cadena:
        if char in reemplazos:
            resultado += reemplazos[char]
        elif 'a' <= char <= 'z':
            resultado += chr(ord(char) - 32)
        else:
            resultado += char
    return resultado

while True:
    palabra = input("Ingrese una palabra (o 'salir' para salir): ")

    if palabra == 'salir':
        break

    opcion = input("Seleccione una opción:\n1. Convertir a mayúsculas\n2. Convertir a minúsculas\n")

    if opcion == '1':
        palabra = cambiar_a_mayusculas(palabra)
    elif opcion == '2':
        palabra = cambiar_a_minusculas(palabra)
    else:
        print("Opción no válida")
        continue

    print("Palabra convertida:", palabra)