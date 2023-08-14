word_list = []
max_length = 0
for _ in range(5) :
    word = input()
    word_list.append(word)
    
    if (max_length < len(word)) :
        max_length = len(word)
    
result = ''
for i in range(max_length) :
    for j in range(5) :
        if (i < len(word_list[j])) :
            result = result + word_list[j][i]
            
print(result)