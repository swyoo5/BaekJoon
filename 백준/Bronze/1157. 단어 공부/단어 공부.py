word = input().upper()
alphabet = [0] * 26

for alp in word :
    if 'A' <= alp <= 'Z' :
        alphabet[ord(alp) - ord('A')] += 1

max_count = max(alphabet)
if (alphabet.count(max_count) > 1) :
    print('?')
else :
    max_index = alphabet.index(max(alphabet))
    max_word = chr(max_index + ord('A'))
    print(max_word)