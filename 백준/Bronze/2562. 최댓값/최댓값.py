num_list = []
for i in range(9) :
    a = int(input())
    num_list.append(a)
    
print(max(num_list), num_list.index(max(num_list)) + 1)