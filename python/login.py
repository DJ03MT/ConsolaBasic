
usuario = "admin"
contrasena = "1234"


print("Bienvenido al login")
print("Por favor, ingresa tu usuario")
usuario = input()
print("Por favor, ingresa tu contrasena")
contrasena = input()

if usuario == "admin" and contrasena == "1234":
    print("Bienvenido")
else:
    print("Usuario o contrasena incorrectos")