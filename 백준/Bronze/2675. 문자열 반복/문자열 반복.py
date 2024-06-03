num = int(input())
for _ in range(num) :
    result  = ""
    r, s = map(str, input().split())
    r = int(r)
    for i in s :
        result += i * r
    print(result)