import math

def primeFactor (N):
    while (N%2==0):
        print (2)
        N = N/2

    for i in range(3, int(math.sqrt(N)), 2):
        while (N%i==0):
            print (int(i))
            N = N/i
    
    if (N>2):
        print (int(N))

primeFactor(250)

