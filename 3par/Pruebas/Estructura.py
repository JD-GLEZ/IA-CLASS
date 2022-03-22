
Informacion = []
x = int(input("Cuantos datos desea introducir: "))

for i in range(x):
    nombre = raw_input("Nombre: ")
    edad = raw_input("Edad: ")
    Informacion.append([nombre, edad])

print("los datos son",Informacion)
for datos in Informacion:
    print "Nombre:", datos[0]
    print "Edad:", datos[1]
raw_input()