def solution(numLog):
    key = dict(zip([1, -1, 10, -10], ['w', 's', 'd', 'a']))
    answer = ""
    for idx in range(1, len(numLog)) :
        answer = answer + key[numLog[idx] - numLog[idx - 1]]
    return answer