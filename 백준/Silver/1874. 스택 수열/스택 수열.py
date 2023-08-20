n = int(input())

current = 1
stack = []
result = []
possible = True
for _ in range(n) :
    number = int(input())
    
    while (current <= number) :
        stack.append(current)
        result.append('+')
        current += 1
        
    if (stack[-1] == number) :
        stack.pop()
        result.append('-')
    else :
        possible = False
        break
        
if not possible :
    print("NO")
else :
    for i in result :
        print(i)