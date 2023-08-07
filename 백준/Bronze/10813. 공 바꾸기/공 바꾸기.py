m, n = map(int, input().split())

basket = [i for i in range(1, m + 1)]

for i in range(n) :
    a, b = map(int, input().split())
    basket[a - 1], basket[b - 1] = basket[b - 1], basket[a - 1]
    
for ball in basket :
    print(ball, end = ' ')