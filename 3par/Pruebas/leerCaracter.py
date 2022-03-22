file = open("Lab.txt", "r")
while True:
    letra = file.read(1)
    if not letra:
        print "End of file"
        print (letra)
        break
    print "Caracter obtenido:", letra
file.close()