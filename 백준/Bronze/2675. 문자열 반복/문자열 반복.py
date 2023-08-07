case = int(input())
for _ in range(case) :
    num, word = input().split()
    for w in word :
        print(w * int(num), end = '')
    print()