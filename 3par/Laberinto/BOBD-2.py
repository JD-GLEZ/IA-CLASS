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
    AUX = []
    x = len(D[0])
    i = 0
    while(i < x):
        j = 0
        AUX.append([])
        while(j < x):
            y = D[i][j]
            AUX[i].append(y)
            j = j + 1
        i = i + 1
    del File
    del i
    del j
    del D
    del x
    return(AUX)


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
            print(D[i])
            i = i + 1

# Los Valores van de 1-4 ,1=Arriba,2=Derecha,3=Abajo,4=Izquierda


def BOBN():   # Primera Generacion de Bobs
    x = 0
    BoB = []
    while (x < 450):
        BoB.append((random.randint(0, 3)) + 1)
        x = x + 1
    return (BoB)


def BOBC():   # Copia Generacion de Gen Anterior Bobs
    x = 0
    BoB = []
    while (x < 450):
        BoB.append((random.randint(0, 3)) + 1)
        x = x + 1
    return (BoB)


def BOBN():   # Primera Generacion de Bobs
    x = 0
    BoB = []
    while (x < 450):
        BoB.append((random.randint(0, 3)) + 1)
        x = x + 1
    return (BoB)



def RD(NoGen):   # Resolver Laberinto
    M = 0
    Nbob = 0    # Numero de BOBs
    B = []
    del B[:]
    y = 0
    if(NoGen == 0):     # Primer Generacion de BoBs
        while(y < 250):
            B.append(BOBN())
            y = y + 1
    else:               # Generaciones siguientes
        while(y < 250):
            if():
            B.append(BOBN())
            y = y + 1
    NoGen = NoGen + 1
    y = 0
    while(M == 0):
        while(Nbob < 250):
            raw_input()
            D = Leer()
            Imprimir(D)
            i = 1
            j = 1
            x = 0
            x = len(D[0])
            BOBI = "B"
            BAL = Baldosas(x)   # Casillas que pisa BoB
            BAL[i][j] = BAL[i][j] + 1
            del D[i][j]
            D[i].insert(j, BOBI)
            N = 0   # Posicion en el arreglo de cada Bob
            while(N < 450):
                D = Leer()
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
                    del D[i][j]
                    D[i].insert(j, BOBI)
                N = N + 1
                Clear()
                Imprimir(D)
                time.sleep(.1)
        Nbob = Nbob + 1
        M = 1


    NoGen = 0    # Numero de la Generacion
RD(NoGen)
raw_input("Fin")




#    Matriz
