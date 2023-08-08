word = input()
croatia = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]

for cro in croatia :
    word = word.replace(cro, '#')

print(len(word))