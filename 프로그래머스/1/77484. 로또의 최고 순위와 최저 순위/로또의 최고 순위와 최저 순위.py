def solution(lottos, win_nums):
    answer = []
    same_ball = 0
    for my_num in lottos :
        if my_num in win_nums :
            same_ball += 1
    answer.append(min(7 - same_ball, 6))
    same_ball += lottos.count(0)
    answer.append(min(7 - same_ball, 6))
    answer.sort()
    return answer