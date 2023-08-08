num, base = map(int, input().split())

conversion_number = ""
while (num != 0) :
    digit = num % base
    if (0 <= digit <= 9) :
        conversion_number = str(digit) + conversion_number
    else :
        conversion_number = chr(ord('A') + digit - 10) + conversion_number
    num //= base
    
print(conversion_number)