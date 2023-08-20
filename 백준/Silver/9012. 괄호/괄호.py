import sys

n = int(sys.stdin.readline())
for _ in range(n) :
    parenthesis = sys.stdin.readline()
    stack = []
    valid = True
    
    for i in parenthesis :
        if (i == '(') :
            stack.append('(')
        elif (i == ')') :
            if (len(stack) == 0 or stack[-1] != '(') :
                valid = False
                break
            stack.pop()

    if (len(stack) == 0 and valid) :
        print("YES")
    else :
        print("NO")
            