import random


numero_ganador = random.randint (1,10)
numero_elegido =  int(input("Elige un numero del uno al diez: "))
if numero_elegido == numero_ganador: 
    print ("has ganado")
else:
    print("El numero ganador era: {}", format(numero_ganador))