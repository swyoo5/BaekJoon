n = int(input())
start, end = 1, 1
numerator = 0
denominator = 0
plus = 1
while True :
    if (start <= n <= end) :
        if ((end - start) % 2 == 0) :
            numerator = plus - (n - start)
            denominator = 1 + (n - start)
            break
        else :
            numerator = 1 + (n - start)
            denominator = plus - (n - start)
            break
    plus += 1
    start = end + 1
    end = end + plus
    
result = str(numerator) + '/' + str(denominator)
print(result)