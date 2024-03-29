import sys

n = int(sys.stdin.readline())

stack = []
for _ in range(n) :
    command = list(sys.stdin.readline().split())
    length = len(stack)
    if (command[0] == "push") :
        stack.append(command[1])
    elif (command[0] == "pop") :
        if (length == 0) :
            print(-1)
        else :
            print(stack.pop())
    elif (command[0] == "size") :
        print(length)
    elif (command[0] == "empty") :
        if (length == 0) :
            print(1)
        else :
            print(0)
    elif (command[0] == "top") :
        if (length == 0) :
            print(-1)
        else :
            print(stack[-1])