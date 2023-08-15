vertex = list(map(int, input().split()))

vertex[2] = vertex[2] - vertex[0]
vertex[3] = vertex[3] - vertex[1]

print(min(vertex))