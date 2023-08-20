import sys

n = int(sys.stdin.readline())

for _ in range(n) :
    sentence = sys.stdin.readline()
    stack = []
    
    for alphabet in sentence :
        if (alphabet == ' ' or sentence.index(alphabet) == (len(sentence) - 1)) :
            while (len(stack) != 0) :
                print(stack.pop(), end = '')
            print(' ', end = '')
        else :
            stack.append(alphabet)
        