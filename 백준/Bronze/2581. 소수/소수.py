def is_prime(n) :
    if n < 2 : 
        return False
    elif n == 2 :
        return True
    else :
        for i in range(2, int(n ** 0.5) + 1) :
            if (n % i == 0) :
                return False
    return True
    
start = int(input())
end = int(input())
prime = []

for num in range(start, end + 1) :
    if (is_prime(num)) :
        prime.append(num)
        
if (len(prime) == 0) :
    print(-1)
else :
    print(sum(prime))
    print(min(prime))