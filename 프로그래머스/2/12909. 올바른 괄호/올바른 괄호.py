def solution(parenthesis):
    stack = []
    answer = True
    for p in parenthesis :
        if p == '(' :
            stack.append(p)
        else :
            if len(stack) != 0 and stack[-1] == '(':
                stack.pop()
            else :
                answer = False
                break
                
    if len(stack) != 0 :
        answer = False
        
    return answer