number = list(input())
for digit in number :
    digit = int(digit)
    
number = sorted(number, reverse = True)
for digit in number :
    print(digit, end = '')