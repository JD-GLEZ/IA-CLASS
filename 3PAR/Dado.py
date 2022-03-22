c=17
a=(8*c)+3
numero=2
m=pow(numero, 16)
n = int(input("Cuantos Lanzaminetos deseas: "))
semilla = int(input("Ingresa un numero impar: "))
for p in range (n):
    semilla2 = (a+c*semilla)%m
    i=semilla2
    print (i)
    print (m)
    r=i/m
    print(r)
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
