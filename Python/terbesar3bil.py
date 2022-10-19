print("Input 3 buah bilangan")
A = int(input("Bilangan 1: "))
B = int(input("Bilangan 2: "))
C = int(input("Bilangan 3: "))

print("Bilangan terbesar: ")

if (A > B):
    if (A > C):
        print(A)
    else:
        print(C)
else:
    if (B > C):
        print(B)
    else:
        print(C)