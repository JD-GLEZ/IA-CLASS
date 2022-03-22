import time

c=17
a=(8*c)+3
numero=2
m=pow(numero,16)
n = int(input("Cuantos Lanzaminetos deseas: "))
semilla = int(input("Ingresa un numero impar: "))
semilla2 = int(input("Ingresa un numero impar: "))
resultado = int(input("Ingresa el numero al que deseas apostar(es la suma de los dados): "))
for i in range (n):
    semilla = (a+c*semilla)%m
    i=semilla
    r=i/m
    if r >= 0 and r<=0.16666667:
  	print("1")
  	x1 = 1
    if r >= 0.166666667 and r<=0.33333333:
  	print("2")
  	x1 = 2
    if r >= 0.33333333 and r<=0.5:
  	print("3")
  	x1 = 3
    if r >= 0.5 and r<=0.66666667:
  	print("4")
  	x1 = 4
    if r >= 0.66666667 and r<= 0.83333333:
  	print("5")
  	x1 = 5
    if r >= 0.83333333 and r<= 1:
  	print("6")
  	x1 = 6
for p in range (n):
  semilla2 = (a+c*semilla2)%m
  p=semilla2
  t=p/m
    if t >= 0 and t<=0.16666667:
        print("1")
        x2 = 1
    if t >= 0.166666667 and t<=0.33333333:
        print("2")
        x2 = 2
    if t >= 0.33333333 and t<=0.5:
        print("3")
        x2 = 3
    if t >= 0.5 and t<=0.66666667:
        print("4")
        x2 = 4
    if t >= 0.66666667 and t<= 0.83333333:
        print("5")
        x2 = 5
    if t >= 0.83333333 and t<= 1:
        print("6")
        x2 = 6
print("impiririririirir")
for f in range (n):
    suma = x1+x2
    print(f)
    time.sleep(.1)
salir = input ("¿deseas terminar? : ")
