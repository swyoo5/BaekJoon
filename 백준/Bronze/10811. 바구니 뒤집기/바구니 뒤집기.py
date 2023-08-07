m, n = map(int, input().split())

num_list = [i for i in range(1, m + 1)]
for i in range(n) :
    a, b = map(int, input().split())
    temp = num_list[a - 1 : b]
    temp.reverse()
    num_list[a - 1 : b] = temp
        
for i in range(m) :
    print(num_list[i], end = ' ')