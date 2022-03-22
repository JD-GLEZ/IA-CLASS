x = "Holas"
print (5*x)
y = " Adios"
z = x + y + ' l '
print (z)
i = 0
bal = []
while(i < 5):
    bal.append(x * 5)
    i = i + 1
print (bal)
AL = bal[2][2]
print AL
del bal[1]
del x
x = "B"
print (bal)
del y
y = bal[0]
bal.insert(0, y)
print (bal)
v = 2
w = 2
del bal[v][w]
bal[v].insert(w, x)
print (bal)
#i = 0
#v = 2
#w = 2
#AUX = []
#while(i < 5):
#    j = 0
#    AUX.append([])
#    while(j < 5):
#        if(i == v and j == w):
#            AUX[i].append("B")
#        else:
#            AL = bal[i][j]
#            AUX[i].append(AL)
#            del AL
#print (AUX)