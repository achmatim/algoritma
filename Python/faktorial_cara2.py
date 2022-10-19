def faktorial (N):
    hasil = 1
    for x in range(N, 0, -1):
        hasil = hasil * x
    return hasil

N = 5
print (faktorial(N))

