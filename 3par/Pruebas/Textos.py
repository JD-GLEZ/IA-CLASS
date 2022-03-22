#!/usr/bin/python

# Abrimos el archivo codehero.txt
fo = open("codehero.txt", "wb")
print fo
print "Nombre del archivo : ", fo.name
print "Cerrado o no : ", fo.closed
print "Modo de apertura : ", fo.mode