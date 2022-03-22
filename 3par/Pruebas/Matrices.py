i = 0
j = 0
bal = []
x = 4
while(i < x):
    bal.append([])
    while(j < x):
        bal[i].append(1)
        j = j + 1
    i = i + 1
print(bal)
z = bal[1][1]
print(z)
y = bal[1][1] + 1
bal[1][1]= y
print(bal[1][1])
raw_input()