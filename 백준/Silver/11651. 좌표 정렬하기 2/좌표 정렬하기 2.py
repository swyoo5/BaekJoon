N = int(input())
coord = []

for _ in range(N) :
    vertex = list(map(int, input().split()))
    coord.append(vertex)
    
coord.sort(key = lambda x : (x[1], x[0]))
for vertex in coord :
    print(vertex[0], vertex[1])