N = int(input())
score = list(map(int, input().split()))

M = max(score)
average = 0
for i in range(N) :
    average += score[i] / N
    
average *= 100 / M
print(average)