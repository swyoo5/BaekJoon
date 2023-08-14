N = int(input())
number_list = map(int, input().split())
prime = 0
for num in number_list :
    is_prime = True
    if num >= 2 :
        for i in range(2, num) :
            if num % i == 0 :
                is_prime = False
        if (is_prime) :
            prime += 1
            
print(prime)