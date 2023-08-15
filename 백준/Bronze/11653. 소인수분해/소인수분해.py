def factorization(n) :
    i = 2
    while (i <= n) :
        if (n % i == 0) :
            print(i)
            n //= i
        else :
            i += 1
            
n = int(input())
factorization(n)
        