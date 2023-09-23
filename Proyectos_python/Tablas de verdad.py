print("Tabla de verdad para AND:")
print("A\tB\tA AND B")
for a in [False, True]:
    for b in [False, True]:
        print(f"{a}\t{b}\t{a and b}")

print("\nTabla de verdad para OR:")
print("A\tB\tA OR B")
for a in [False, True]:
    for b in [False, True]:
        print(f"{a}\t{b}\t{a or b}")

print("\nTabla de verdad para NOT:")
print("A\tNOT A")
for a in [False, True]:
    print(f"{a}\t{not a}")
