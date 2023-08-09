import math
day, night, height = map(int, input().split())

result = (height - night) / (day - night)
print(math.ceil(result))