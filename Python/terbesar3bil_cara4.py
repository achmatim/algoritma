print("Input 3 buah bilangan")
A = int(input("Bilangan 1: "))
B = int(input("Bilangan 2: "))
C = int(input("Bilangan 3: "))

print("Bilangan terbesar: ")

if (A > B) and (A > C):
    print(C)

if (B > A) and (B > C):
    print(B)

if (C > A) and (C > B):
    print(C)

