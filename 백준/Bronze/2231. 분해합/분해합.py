n = int(input())

for num in range(1, n) :
    digit_sum = num
    for digit in str(num) :
        digit_sum += int(digit)
    
    if (digit_sum == n) :
        print(num)
        quit()
        
print(0)