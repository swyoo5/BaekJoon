parenthesis = input()

answer = 0
stack = []
for i in range(len(parenthesis)) :
    if (parenthesis[i] == '(') :
        stack.append('(')
    else :
        if (parenthesis[i - 1] == '(') :
            stack.pop()
            answer += len(stack)
        else :
            stack.pop()
            answer += 1
            
print(answer)