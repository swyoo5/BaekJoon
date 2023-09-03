n = int(input())
equation = input()
num_list = [0] * n

for i in range(n) :
    num_list[i] = int(input())
    
stack = []
for i in equation :
    if ('A' <= i <= 'Z') :
        stack.append(num_list[ord(i) - ord('A')])
    else :
        num2 = stack.pop()
        num1 = stack.pop()
        if (i == '+') :
            stack.append(num1 + num2)
        elif (i == '-') :
            stack.append(num1 - num2)
        elif (i == '*') :
            stack.append(num1 * num2)
        elif (i == '/') :
            stack.append(num1 / num2)
            
print("%.2f" %stack[0])