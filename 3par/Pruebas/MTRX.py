Matrix = [[0 for x in range(5)] for x in range(5)]
Matrix[0][0] = 1
Matrix[4][0] = 5
print Matrix[0][0] # prints 1
print Matrix[4][0] # prints 5
Matrix[0][0] = Matrix[0][0] + 1
print Matrix[0][0] # prints 1