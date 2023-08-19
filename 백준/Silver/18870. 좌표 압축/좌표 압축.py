N = int(input())
x_list = list(map(int, input().split()))

x_sort = sorted(list(set(x_list)))
x_dict = {x_sort[i] : i for i in range(len(x_sort))}

for i in x_list :
    print(x_dict[i])