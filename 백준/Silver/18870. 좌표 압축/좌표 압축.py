N = int(input())
x = list(map(int, input().split()))

x_sort = sorted(list(set(x)))
x_dict = {x_sort[i] : i for i in range(len(x_sort))}

for i in x :
    print(x_dict[i])