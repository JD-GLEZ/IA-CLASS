import math
import os
import random
import time


def Clear():   # Funcion para Limpiar Pantalla
    os.system("cls")


def Leer():   # Lee El Laberinto
    try:
        File = open('Lab.txt', 'r')
    except:
        print ('Error')
    D = []
    while True:
        Linea = File.readline(16)
        D.append(Linea)
        if File.readline() == "":
            break
    File.close()
    return(D)


def Baldosas(x):
    bal = [[0 for i in range(x)] for i in range(x)]
#    i = 0
#    bal = []
#    while(i < x):
#        bal.append([0] * x)
#        i = i + 1
    return(bal)


def Imprimir(D):
        i = 0
        while (i <= 15):
            print (D[i])
            i = i + 1

# Los Valores van de 1-4 ,1=Arriba,2=Derecha,3=Abajo,4=Izquierda


def BOBN():   # Primera Generacion de Bobs
    x = 0
    BoB = []
    while (x < 450):
        BoB.append((random.randint(0, 3)) + 1)
        x = x + 1
    return (BoB)


def RD():   # Resolver Laberinto
    M = 0
    Nbob = 0    # Numero de BOBs
    D = Leer()
    Imprimir(D)
    B = []
    del B[:]
    y = 0
    while(y < 250):     # Primer Generacion de BoBs
        B.append(BOBN())
        y = y + 1
    y = 0
    while(M == 0):
        while(Nbob < 250):
            i = 1
            j = 1
            x = 0
            x = len(D[0])
            BOBI = "B"
            BAL = Baldosas(x)   # Casillas que pisa BoB
            BAL[i][j] = BAL[i][j] + 1
            del D[i][j]
            D[i].insert(j, BOBI) ##
            N = 0   # Posicion en el arreglo de cada Bob
            while(N < 450):
                if(B[Nbob][N] == 1 and D[i - 1][j] == '0'):
                    i = i - 1
                    del D[i][j]
                    D[i].insert(j, BOBI)
                    BAL[i][j] = BAL[i][j] + 1
                elif(B[Nbob][N] == 2 and D[i][j + 1] == '0'):
                    j = j + 1
                    del D[i][j]
                    D[i].insert(j, BOBI)
                    BAL[i][j] = BAL[i][j] + 1
                elif(B[Nbob][N] == 3 and D[i + 1][j] == '0'):
                    i = i + 1
                    del D[i][j]
                    D[i].insert(j, BOBI)
                    BAL[i][j] = BAL[i][j] + 1
                elif(B[Nbob][N] == 4 and D[i][j - 1] == '0'):
                    j = j - 1
                    del D[i][j]
                    D[i].insert(j, BOBI)
                    BAL[i][j] = BAL[i][j] + 1
                else:
                    BAL[i][j] = BAL[i][j] + 1
                N = N + 1
        Nbob = Nbob + 1
        M = 1


RD()
raw_input("Fin")




#    Matriz
#    1111111111111111
#    1501010000010001
#    1001010000010001
#    1001010000010001
#    1001010100010001
#    1011010100110001
#    1000010100000001
#    1000010100000001
#    1000000110000001
#    1111111100011101
#    1000001000010001
#    1000001000010001
#    1001111000010001
#    1000000000010061
#    1111111111111111