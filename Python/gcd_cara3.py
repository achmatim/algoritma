#gcd dengan Euclidean Extended
def gcd (a:int, b:int, x:int, y:int) -> int:
    if (a == 0):
        x = 0
        y = 1
        return b
    
    x1 = 1 
    y1 = 1

    gc = gcd(b%a, a, x1, y1)

    x = y1 - (b/a) * x1
    y = x1
    return gc

print (gcd(140,250, 0, 0))
    
    