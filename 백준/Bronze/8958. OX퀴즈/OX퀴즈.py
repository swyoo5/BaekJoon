case = int(input())
for _ in range(case) :
    total_score = 0
    score = 0
    quiz = input()
    for i in quiz :
        if i == 'O' :
            score += 1
            total_score += score
        else :
            score = 0
    print(total_score)