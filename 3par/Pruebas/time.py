import time
x = 0
while (x < 500):
    millis = int(round(time.time())*x)
    x=x+1
    print millis