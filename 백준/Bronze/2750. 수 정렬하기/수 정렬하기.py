N = int(input())
num_list = [int(input()) for _ in range(N)]

num_list = sorted(num_list)
for i in num_list :
    print(i)