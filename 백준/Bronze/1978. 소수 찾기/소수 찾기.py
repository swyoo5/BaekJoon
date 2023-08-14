case = int(input())
number_list = map(int, input().split())

def is_prime(num) :
    if num < 2 : 
        return False
    elif num == 2 : 
        return True
    else :
        for i in range(2, int(num ** 0.5) + 1) :
            if (num % i == 0) :
                return False
            
    return True

prime = 0
for num in number_list :
    if is_prime(num) :
        prime += 1
        
print(prime)