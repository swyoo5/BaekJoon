sides = list(map(int, input().split()))

result = 0
if (max(sides) < sum(sides) - max(sides)) :
    result = sum(sides)
else :
    result = 2 * (sum(sides) - max(sides)) - 1
    
print(result)