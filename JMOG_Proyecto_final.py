jugadores = []
jugadores.append(["LeBron", "James", 39038, 38, 2.06])
jugadores.append(["Stephen", "Curry", 22123, 35, 1.88])

def agregar(personas):
    print("\n=== Agregar Jugador ===")
    nombre = input("Nombre: ")
    apellido = input("Apellido: ")
    puntos_en_su_carrera = input("Puntos en su carrera: ")
    edad = validar_entero("Edad: ")
    altura = validar_float("Altura: ")

    personas.append([nombre, apellido, puntos_en_su_carrera, edad, altura])
    print("Jugador agregado exitosamente!")

def mostrar(personas):
    print("\n=== Mostrar Jugadores ===")
    if not personas:
        print("No hay jugadores para mostrar.")
        return

    for persona in personas:
        print("Nombre: {}\nApellido: {}\nPuntos en su carrera: {}\nEdad: {}\nAltura: {}\n========================".format(
            persona[0], persona[1], persona[2], persona[3], persona[4]))

def buscar(personas):
    print("\n=== Buscar Jugador ===")
    if not personas:
        print("No hay jugadores para buscar.")
        return

    nombre = input("Nombre: ")
    for persona in personas:
        if persona[0] == nombre:
            print("\nNombre: {}\nApellido: {}\nPuntos en su carrera: {}\nEdad: {}\nAltura: {}\n========================".format(
                persona[0], persona[1], persona[2], persona[3], persona[4]))
            break
    else:
        print("No se encontró a la persona")

def modificar(personas):
    print("\n=== Modificar Jugador ===")
    if not personas:
        print("No hay jugadores para modificar.")
        return

    nombre = input("Nombre: ")
    for persona in personas:
        if persona[0] == nombre:
            nombre = input("Nuevo nombre: ")
            apellido_paterno = input("Nuevo apellido: ")
            apellido_materno = input("Puntos en su carrera: ")
            edad = validar_entero("Nueva edad: ")
            altura = validar_float("Nueva altura: ")

            persona[0] = nombre
            persona[1] = apellido
            persona[2] = puntos_en_su_carrera
            persona[3] = edad
            persona[4] = altura
            print("Jugador modificado exitosamente!")
            break
    else:
        print("No se encontró a la persona")

def eliminar(personas):
    print("\n=== Eliminar Jugador ===")
    if not personas:
        print("No hay jugadores para eliminar.")
        return

    nombre = input("Nombre: ")
    for persona in personas:
        if persona[0] == nombre:
            personas.remove(persona)
            print("Jugador eliminado exitosamente!")
            break
    else:
        print("No se encontró a la persona")

def validar_entero(mensaje):
    while True:
        try:
            return int(input(mensaje))
        except ValueError:
            print("Por favor, ingrese un valor entero válido.")

def validar_float(mensaje):
    while True:
        try:
            return float(input(mensaje))
        except ValueError:
            print("Por favor, ingrese un valor decimal válido.")

while True:
    print("\n=== Menú ===")
    print("1. Mostrar jugadores")
    print("2. Agregar jugador")
    print("3. Modificar jugador")
    print("4. Eliminar jugador")
    print("5. Buscar jugador")
    print("0. Salir")

    opcion = input("Seleccione una opción: ")

    if opcion == "1":
        mostrar(jugadores)
    elif opcion == "2":
        agregar(jugadores)
    elif opcion == "3":
        modificar(jugadores)
    elif opcion == "4":
        eliminar(jugadores)
    elif opcion == "5":
        buscar(jugadores)
    elif opcion == "0":
        break
    else:
        print("Opción no válida. Por favor, seleccione una opción válida.")
