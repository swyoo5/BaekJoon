remainder = set()

for _ in range(10) :
    num = (int(input())) % 42
    remainder.add(num)
    
print(len(remainder))