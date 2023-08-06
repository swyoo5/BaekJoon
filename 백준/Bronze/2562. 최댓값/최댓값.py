num_list = []

for _ in range(9) :
    a = int(input())
    num_list.append(a)
    
print(max(num_list))
print(num_list.index(max(num_list)) + 1)