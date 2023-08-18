N = int(input())
member_list = []

for _ in range(N) :
    age, name = map(str, input().split())
    age = int(age)
    member_list.append((age, name))
    
member_list.sort(key = lambda x : x[0])

for info in member_list :
    print(info[0], info[1])