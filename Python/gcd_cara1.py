def gcd (a:int, b:int) -> int:
    #jika salah satunya 0
    if (a == 0):
        return b
    if (b == 0):
        return a

    if (a == b):
        return a 
    
    if (a > b):
        return gcd (a-b, b)
    return gcd (a, b-a)

print (gcd(140,250))
    
    