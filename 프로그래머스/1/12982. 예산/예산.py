def solution(d, budget):
    d = sorted(d)
    sum_d = 0
    answer = 0
    for i in d :
        sum_d += i
        answer += 1
        if sum_d > budget :
            answer -= 1
            break
    return answer