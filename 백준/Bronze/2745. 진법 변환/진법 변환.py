num, base = input().split()
base = int(base)

conversion_number = 0
for i in range(len(num)) :
    if ('A' <= num[i] <= 'Z') :
        conversion_number += (ord(num[i]) - ord('A') + 10) * base ** (len(num) - i - 1)   
    else :
        conversion_number += int(num[i]) * base ** (len(num) - i - 1)
print(conversion_number)