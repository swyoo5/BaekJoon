num = int(input())
group = num
for _ in range(num) :
    word = input()
    length = len(word)
    
    for i in range(length - 1) :
        if word[i] == word[i + 1] :
            continue
        elif word[i] in word[i + 1:] :
            group -= 1
            break
print(group)