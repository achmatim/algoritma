#gcd dengan Euclidean + Modulus
def gcd (a:int, b:int) -> int:
    if (a == 0):
        return b
    return gcd(b%a, a)

print (gcd(140,250))
    
    