while True:
    print ("Puedo calcular areas de diferentes figuras, cuadrado, triangulo y circulo.")
    print ("selecciona una opcion")
    print ("1.Area de cuadrado\n2.Area de triangulo\n3.Area de circulo\n4.Salir")
    opcion=int(input())
    if opcion == 1: 
        print("Ingresa la medida de un lado de tu cuadrado")
        lado=int(input())
        Area_cuadrado=lado*lado
        print(f"El area de tu cuadrado es:{Area_cuadrado}")
    elif opcion == 2:
        print("Infresa la base de tu triangulo")
        base=int(input())
        print("Ingresa la altura de tu triangulo")
        altura=int(input())
        Area_triangulo=(base*altura)/2
        print(f"El area de tu triangulo es:{Area_triangulo}")
    elif opcion == 3:
        print("Ingresa el radio de tu circulo")
        pi=3.14159265359
        radio=int(input())
        Area_circulo=pi*(radio*radio)
        print(f"El area de tu circulo es{Area_circulo} ")
    elif opcion == 4:
        print("Adios!")
        break
    else:
        print ("Opcion no valida, por favor elige una opcion valida")
    