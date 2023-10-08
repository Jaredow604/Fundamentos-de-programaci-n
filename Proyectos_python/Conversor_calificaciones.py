print("Este es un programa de conversion de calificaciones")
print("Ingresa tu calificación del 0 al 100")
calificacion=int(input())
if 97 <= calificacion <=100:
    calificacion_alfabetica="A+"
elif 93 <= calificacion <=96:
    calificacion_alfabetica="A"
elif 90 <= calificacion <=92:
    calificacion_alfabetica="A-"
elif 87<= calificacion<= 89:
    calificacion_alfabetica="B+"
elif 83 <= calificacion <= 86:
    calificacion_alfabetica="B"
elif 80 <= calificacion <= 82:
    calificacion_alfabetica="B-"
elif 77 <= calificacion <= 79:
    calificacion_alfabetica="C+"    
elif 73 <= calificacion <= 76:
    calificacion_alfabetica="C"
elif 70 <= calificacion <= 72:
    calificacion_alfabetica="C-"
elif 67 <= calificacion <= 69:
    calificacion_alfabetica="D+"
elif 65 <= calificacion <=66:
    calificacion_alfabetica="D"
elif 0 <= calificacion <=64:
    calificacion_alfabetica="D-"
print(f"Tu calificacion en numeros es {calificacion} y tu calificacion alfabetica es {calificacion_alfabetica}")