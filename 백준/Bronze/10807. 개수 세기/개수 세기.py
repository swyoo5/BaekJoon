num = int(input())
num_list = list(map(int, input().split()))
find = int(input())

result = num_list.count(find)
print(result)