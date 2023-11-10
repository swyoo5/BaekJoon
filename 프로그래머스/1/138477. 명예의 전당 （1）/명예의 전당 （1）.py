def solution(k, scores):
    answer = []
    fame = []
    for score in scores :
        fame.append(score)
        fame.sort()
        if len(fame) > k :
            fame.pop(0)
        result = min(fame)
        answer.append(result)
    return answer