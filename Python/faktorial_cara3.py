def faktorial (N):
    if N == 1:
        return 1
    else:
        return (N * faktorial(N-1))

N = 5
print (faktorial(N))

