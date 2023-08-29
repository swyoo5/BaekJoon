n, k = map(int, input().split())
current = 0
arr = [i for i in range(1, n + 1)]
result_list = []

for i in range(n) :
    current += k - 1
    if current >= len(arr) :
        current %= len(arr)
        
    result_list.append(str(arr.pop(current)))
print("<", ", ".join(result_list), ">", sep = '')