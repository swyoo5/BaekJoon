number, k = map(int, input().split())

index = 0
result = 0
find_factor = False

for i in range(1, number + 1) :
    if (number % i == 0) :
        index += 1
        if (index == k) :
            find_factor = True
            result = i
            break

if (find_factor) :
    print(result)
else :
    print(0)