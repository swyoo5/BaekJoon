mul = 1
count_list = [0] * 10
for i in range(3) :
    mul *= int(input())
mul = str(mul)
for i in mul :
    count_list[int(i)] += 1

for c in count_list :
    print(c)