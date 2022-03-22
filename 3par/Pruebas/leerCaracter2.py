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
print (x)
print (AUX)
