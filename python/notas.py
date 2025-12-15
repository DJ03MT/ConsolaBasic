print("Bienvenido al sistema de notas")
print("Ingresa 3 notas")

notas = []
for i in range(3):
    print("Nota", i + 1, ":")
    nota = int(input())
    notas.append(nota)

promedio = sum(notas) / len(notas)

if promedio >= 6:
    print("Aprobado")
else:
    print("Reprobado")
