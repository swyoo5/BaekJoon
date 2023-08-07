alphabet = [-1 for _ in range(26)]

word = input()
for i in range(len(word)) :
    alp_idx = ord(word[i]) - ord('a')
    if (alphabet[alp_idx] == -1) :
        alphabet[alp_idx] = i
        
for i in alphabet :
    print(i, end = ' ')