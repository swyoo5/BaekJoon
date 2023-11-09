def solution(k, m, scores):
    answer = 0
    scores = sorted(scores, reverse = True)
        
    for i in range(0, len(scores), m) :
        box = scores[i : i + m]
        if len(box) == m :
            answer += min(box) * m

    return answer