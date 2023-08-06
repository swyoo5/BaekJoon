basket, trial = map(int, input().split())
basket_list = [0 for _ in range(basket)]

for _ in range(trial) :
    start, end, ball = map(int, input().split())
    for i in range(start, end + 1) :
        basket_list[i - 1] = ball
        
for i in basket_list :
    print(i, end = ' ')