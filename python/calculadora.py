

IVA = 0.15

print("Bienvenido a la calculadora")

print ("Ingresa el precio del producto")
precioProducto = float(input())


precioFinal = precioProducto + (precioProducto * IVA)

print("Factura")
print("Precio del producto:",precioProducto)
print("IVA:",IVA*100)
print("Precio final:",precioFinal)


