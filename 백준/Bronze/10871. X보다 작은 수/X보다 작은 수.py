n, x = map(int, input().split())
num_list = list(map(int, input().split()))

result = 0
for i in num_list :
    if (i < x) :
        print(i, end = ' ')